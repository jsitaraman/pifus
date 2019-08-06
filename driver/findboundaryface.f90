!>
!> find all faces in a given graph
!> of mixed element grid
!> 
subroutine find_faces(faceOut,c2f,nfaces,iflag,ndc4,ndc5,ndc6,ndc8, &
     nnode,ntetra,npyra,nprizm,nhexa)
!
implicit none
!
integer, allocatable, intent(out) :: faceOut(:)         !> face information (n1,n2,n3,n4,c1,f1,c2,f2)
integer, allocatable, intent(out) :: c2f(:)            !> cell to face map    
integer, intent(inout) :: nfaces                       !> number of triangle and quad faces                
integer, intent(in) :: nnode,ntetra,npyra,nprizm,nhexa !> number of nodes and elements in the graph
integer, intent(in) :: iflag(nnode)                    !> flag to say which one are boundary nodes
integer, intent(in) :: ndc4(4,ntetra)                  !> tetra graph  
integer, intent(in) :: ndc5(5,npyra)                   !> pyra graph 
integer, intent(in) :: ndc6(6,nprizm)                  !> prizm graph  
integer, intent(in) :: ndc8(8,nhexa)                   !> hex graph  i
!
! local variables
!
integer, dimension(3,4)  :: tetf
integer, dimension(4,5)  :: pyrf
integer, dimension(4,5)  :: prizmf
integer, dimension(4,6)  :: hexf
integer, dimension(6,4)  :: numverts
integer, dimension(4)    :: iface
integer :: tetmap(4)
integer :: pyrmap(5)
integer :: prizmap(5)
integer :: hexmap(6)
!
data tetf /1,2,3,1,4,2,2,4,3,1,3,4/                         ! ugrid/mcell face connectivity (tet)
!data tetmap /4,1,2,3/                                       ! map to exodus face ordering
data tetmap /1,2,3,4/
data pyrf /1,2,3,4,1,5,2,2,2,5,3,3,4,3,5,5,1,4,5,5/         ! ugrid/mcell face connectivity (pyramid)
!data pyrmap /5,1,2,3,4/                                     ! map to exodus face ordering
data pyrmap /1,2,3,4,5/
data prizmf /1,2,3,3,1,4,5,2,2,5,6,3,1,3,6,4,4,6,5,5/       ! ugrid/mcell face connectivity (prizm)
!data prizmap /4,1,2,3,5/                                    ! map to exodus face ordering
data prizmap /1,2,3,4,5/
data hexf /1,2,3,4,1,5,6,2,2,6,7,3,3,7,8,4,1,4,8,5,5,8,7,6/ ! ugrid/mcell connectivity (hex)
!data hexmap /5,1,2,3,4,6/                                   ! map to exodus face ordering
data hexmap /1,2,3,4,5,6/
data iface/4,5,5,6/
data numverts/3,3,3,3,0,0,&
              4,3,3,3,3,0,&
              3,4,4,4,3,0,&
              4,4,4,4,4,4/
!
integer :: i,j,k,l,nsum,ncells,maxfaces,tprev,qprev,csum
integer :: flocal(4)
integer, allocatable :: ipointer(:),iflag_cell(:),face(:,:)
!
! find all exposed cell faces
!
allocate(iflag_cell(ntetra+npyra+nprizm+nhexa))
!
maxfaces=0
k=0
do i=1,ntetra
  k=k+1
  iflag_cell(k)=0
  csum=0
  do j=1,4
   csum=csum+iflag(ndc4(j,i))
  enddo
  if (csum > 0 ) then
      iflag_cell(k)=1
      maxfaces=maxfaces+4
  endif
enddo
!
do i=1,npyra
  k=k+1
  iflag_cell(k)=0
  csum=0
  do j=1,5
    csum=csum+iflag(ndc5(j,i))
  enddo
  if (csum > 0 ) then
    iflag_cell(k)=1
    maxfaces=maxfaces+5
  endif
enddo
!
do i=1,nprizm
  k=k+1
  iflag_cell(k)=0
  csum=0
  do j=1,6
   csum=csum+iflag(ndc6(j,i))
  enddo
  if (csum > 0 ) then
    iflag_cell(k)=1
    maxfaces=maxfaces+6
  endif
enddo
!
do i=1,nhexa
  k=k+1
  iflag_cell(k)=0
  csum=0
  do j=1,8
    csum=csum+iflag(ndc8(j,i)) 
  enddo
  if (csum >0 ) then
    iflag_cell(k)=1
    maxfaces=maxfaces+8
  endif
enddo
!
! do a hash insert of the faces now
!
allocate(ipointer(nnode))
allocate(face(9,maxfaces))
!
face=0
ipointer=0
nfaces=0
ncells=0
!
l=0
do i=1,ntetra
   l=l+1
   if (iflag_cell(l)==0) cycle
   do j=1,iface(1)
      nsum=0
      flocal=0
      do k=1,numverts(j,1)
         flocal(k)=ndc4(tetf(k,j),i)
      enddo
      call insert_face(flocal,face,ipointer,i+ncells,&
           tetmap(j),nfaces,maxfaces,nnode,numverts(j,1))
   enddo
enddo
!
ncells=ncells+ntetra
!
do i=1,npyra
   l=l+1
   if (iflag_cell(l)==0) cycle
   do j=1,iface(2)
      nsum=0
      flocal=0
      do k=1,numverts(j,2)
         flocal(k)=ndc5(pyrf(k,j),i)
      enddo
      call insert_face(flocal,face,ipointer,i+ncells,&
           pyrmap(j),nfaces,maxfaces,nnode,numverts(j,2))
   enddo
enddo
!
ncells=ncells+npyra
!
do i=1,nprizm
   l=l+1
   if (iflag_cell(l)==0) cycle
   do j=1,iface(3)
      nsum=0
      flocal=0
      do k=1,numverts(j,3)
         flocal(k)=ndc6(prizmf(k,j),i)
      enddo
      call insert_face(flocal,face,ipointer,i+ncells,&
           prizmap(j),nfaces,maxfaces,nnode,numverts(j,3))
   enddo
enddo
!
ncells=ncells+nprizm
!
do i=1,nhexa
   l=l+1
   if (iflag_cell(l)==0) cycle
   do j=1,iface(4)
      nsum=0
      flocal=0
      do k=1,numverts(j,4)
         flocal(k)=ndc8(hexf(k,j),i)
      enddo
      call insert_face(flocal,face,ipointer,i+ncells,&
           hexmap(j),nfaces,maxfaces,nnode,numverts(j,4))
   enddo
enddo
!
ncells=ncells+nhexa
!
allocate(faceOut(2*nfaces),c2f(6*ncells))
c2f=-1
do i=1,nfaces
   c2f(6*(face(5,i)-1)+face(8,i))=i-1
   if (face(6,i) > 0) then
      c2f(6*(face(6,i)-1)+face(9,i))=i-1
   endif
   faceOut(2*i-1)=face(5,i)-1
   faceOut(2*i)=face(6,i)-1
enddo
!
deallocate(face)
deallocate(ipointer)
deallocate(iflag_cell)
!
return
end subroutine find_faces

!===========================================================================
subroutine sort_face(a,n)
implicit none
integer :: n
integer :: a(n)
integer i,j,tmp

do i=1,n
   do j=i+1,n
      if (a(j) < a(i)) then
         tmp=a(j)
         a(j)=a(i)
         a(i)=tmp
      endif
   enddo
enddo

return
end subroutine sort_face
!
! insert the face into a hashed list
!
!===========================================================================
subroutine insert_face(flocal,face,ipointer,cellIndex,faceIndex, &
     nfaces,maxfaces,nnode,numpts)
implicit none
integer :: nfaces,maxfaces,nnode,numpts
integer :: face(9,maxfaces)
integer :: cellIndex,faceIndex
integer :: flocal(4)
integer :: ipointer(nnode)
!
! local variables
!
integer :: ip,ip0
integer :: f1(4),f2(4)
!
!
f1=flocal
call sort_face(f1,numpts)
!
ip0=ipointer(f1(1))
ip=ip0
checkloop: do while(ip > 0)
   f2=face(1:4,ip)
   call sort_face(f2,numpts)
   if (sum(abs(f1-f2))==0) then
      face(6,ip)=cellIndex
      face(9,ip)=faceIndex
      exit checkloop
   endif
   ip=face(7,ip)
enddo checkloop
if (ip==0) then
   nfaces=nfaces+1
   face(1:4,nfaces)=flocal
   face(5,nfaces)=cellIndex
   face(6,nfaces)=0
   face(7,nfaces)=ipointer(f1(1))
   face(8,nfaces)=faceIndex
   face(9,nfaces)=0
   ipointer(f1(1))=nfaces
endif
return
end subroutine insert_face


