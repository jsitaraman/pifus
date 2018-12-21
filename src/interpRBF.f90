!==============================================================================!
subroutine interpRBF(xcloud,P,weights,np,itype,iflag)
!
! Compute interpolation weights using radial basis function approximation
!
implicit none
!
integer, intent(in) :: np
real*8, intent(in) :: xcloud(3,np)
real*8, intent(in) :: P(3)
real*8, intent(out)  :: weights(np)  !< interpolation weights
integer, intent(in) :: itype
integer, intent(out) :: iflag
!
integer :: neqns
real*8, allocatable  :: M(:,:),B(:)
real*8 :: dd
integer :: i,j
!
neqns=np+4
allocate(M(neqns,neqns),B(neqns))
!
do i=1,np
   do j=1,np
      dd=dot_product(xcloud(:,i)-xcloud(:,j),xcloud(:,i)-xcloud(:,j))
      M(i,j)=exp(-dd)
   enddo
   M(i,np+1:np+4)=[1e0,xcloud(:,i)]
   M(np+1:np+4,i)=M(i,np+1:np+4)
   dd=dot_product(P-xcloud(:,i),P-xcloud(:,i))
   B(i)=exp(-dd)
enddo
M(np+1:np+4,np+1:np+4)=0e0
B(np+1:np+4)=[1e0,P]
!do i=1,np+4
! write(6,"(20(1x,F8.4))") M(i,:)
!enddo
!
call solveMat(M,B,iflag,neqns)
weights(1:np)=B(1:np)
deallocate(M,B)
!
return
end subroutine interpRBF
