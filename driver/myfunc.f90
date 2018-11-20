function myfunc(x,itype)
  implicit none
 real*8 :: x(3)
 integer :: itype
 real*8 :: myfunc
 real*8 :: pi=3.14159d0
 select case(itype)
 case(1)
    myfunc=sum(x)
 case(2)
    myfunc=x(1)**2+x(2)**2+x(3)**2
 case(3)
    myfunc=sin(pi*x(1))*sin(pi*x(2))*sin(pi*x(3))
 end select
end function myfunc
