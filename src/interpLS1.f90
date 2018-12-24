!==============================================================================!
subroutine interpLS1(xcloud,P,weights,np,iflag)
!
! Compute interpolation weights for query point ip
! using first-order Least-Square method.
!
implicit none
!
integer, intent(in) :: np
real*8, intent(in) :: xcloud(3,np)
real*8, intent(in) :: P(3)
real*8, intent(out)  :: weights(np)  !< interpolation weights
integer, intent(out) :: iflag
!
integer :: i,j,ii,i3
real*8 :: B(np,3),JB(np,3),S(3),X(3,3),z(3),y(np),dtest
real*8 :: c,fac,M(np,3),w
!
do i=1,np
   M(i,:)=xcloud(:,i)
end do
!
fac=1.0/np
do j=1,3
   S(j)=0.0
   do i=1,np
      B(i,j)=M(i,j)-P(j)
      S(j)=S(j)+B(i,j)
   end do
   S(j)=fac*S(j)
end do
do j=1,3
   do i=1,np
      JB(i,j)=B(i,j)-S(j)
   end do
end do
X=0.0
do i=1,3
   do j=i,3
      do ii=1,np
         X(i,j)=X(i,j)+B(ii,i)*JB(ii,j)
      end do
   end do
end do
do i=1,3
   do j=i+1,3
      X(j,i)=X(i,j)
   end do
end do
z=S
call solveMat(X,z,iflag,3)
if (iflag==0) then
   write(*,*) 'Problem solving LS1 interpolation'
   w=1.0/np
   do i=1,np
      weights(i)=w
   end do
else
   do i=1,np
      y(i)=0.0
      do j=1,3
         y(i)=y(i)+B(i,j)*z(j)
      end do
   end do
   c=0.0
   do j=1,3
      c=c+S(j)*z(j)
   end do
   do i=1,np
      y(i)=y(i)-c
   end do
   do i=1,np
      weights(i)=fac-y(i)
   end do
end if
!
!call ClipCoef(weights,np)
!
return
end subroutine interpLS1
