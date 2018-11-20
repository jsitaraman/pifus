!=================================================                                                     
subroutine solveMat(a,b,iflag,n)
implicit none
!                                                                                                      
!     subroutine arguments                                                                             
!                                                                                                      
integer,intent(in) :: n
integer,intent(out) :: iflag
real*8, intent(inout) :: a(n,n),b(n)
!                                                                                                      
!     local variables                                                                                  
!                                                                                                      
integer :: i,j,k,ifound
real*8 :: temp,val,fac,aiinv
real*8 :: eps
!                                                                                                      
!     begin execution                                                                                  
!                                                                                                      
eps=1e-15
iflag=1
do i=1,n
   !     make the matrix upper triangular                                                              
   if (abs(a(i,i)).lt.eps) then
      ifound=0
      k=i+1
      do while(k.le.n.and.ifound.eq.0)
         if (abs(a(k,i)).gt.eps) then
            do j=1,n
               temp=a(i,j)
               a(i,j)=a(k,j)
               a(k,j)=temp
            enddo
            temp=b(i)
            b(i)=b(k)
            b(k)=temp
            ifound=1
         endif
         k=k+1
      enddo
      if (ifound.eq.0) then
         iflag=0
         return
      endif
   endif
   !     pivot and drive all coefficients below the pivot to zero
   aiinv=1./a(i,i)
   do k=i+1,n
      fac=-a(k,i)*aiinv
      do j=i,n
         a(k,j)=a(k,j)+fac*a(i,j)
      enddo
      b(k)=b(k)+fac*b(i)
   enddo
enddo
!     back substitution                                                                                
do i=n,1,-1
   val=0.
   do j=i+1,n
      val=val+a(i,j)*b(j)
   enddo
   b(i)=(b(i)-val)/a(i,i)
enddo
return
end subroutine solveMat

!======================================================================================
subroutine SolveMat4(A,x)
implicit none
real*8, intent(in) :: A(4,4)
real*8, intent(out) :: x(4)
! local variables
real*8 :: b11,b21,b22,b31,b32,b33,b41,b42,b43,b44
real*8 :: u12,u13,u14,u23,u24,u34,u44
! begin
b11=1.0/A(1,1)
u12=A(1,2)*b11
u13=A(1,3)*b11
u14=A(1,4)*b11
b21=A(2,1)
b22=1.0/(A(2,2)-b21*u12)
u23=(A(2,3)-b21*u13)*b22
u24=(A(2,4)-b21*u14)*b22
b31=A(3,1)
b32=A(3,2)-b31*u12
b33=1.0/(A(3,3)-b31*u13-b32*u23)
u34=(A(3,4)-b31*u14-b32*u24)*b33
b41=A(4,1)
b42=A(4,2)-b41*u12
b43=A(4,3)-b41*u13-b42*u23
b44=1.0/(A(4,4)-b41*u14-b42*u24-b43*u34)
x(4)=b44
x(3)=-u34*b44
x(2)=-u23*x(3)-u24*b44
x(1)=-u12*x(2)-u13*x(3)-u14*b44
return
end subroutine SolveMat4

