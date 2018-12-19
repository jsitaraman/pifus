program testpifus
 implicit none
 real*8, allocatable :: x(:,:)
 real*8, allocatable :: y(:,:)
 real*8, allocatable :: fx(:),fy(:)
 integer :: n,itype,bid,nvar,m
 character*10 :: nstr,itypestr
 real*8 :: error
 real*8 :: myfunc
 integer :: i
 !
 if (iargc() < 2) then
    write(6,*) 'Usage : testpifus <npts> <itypestr>'
    stop
 endif
 !
 call getarg(1,nstr)
 read(nstr,*) n
 call getarg(2,itypestr)
 read(itypestr,*) itype
 !
 allocate(x(3,n),fx(n))
 allocate(y(3,n),fy(n))
 !
 do i=1,n
    call random_number(x(:,i))
    call random_number(y(:,i))
    x(:,i)=(x(:,i)-0.5e0)*5.0
    y(:,i)=y(:,i)-0.5e0
 enddo
 !
 do i=1,n
    fx(i)=myfunc(x(:,i),itype)
 enddo
 !
 bid=1
 nvar=1
 m=n
 call pifus_init()
 call pifus_register_source(bid,x,n)
 call pifus_register_source_solution(bid,nvar,fx)
 call pifus_register_targets(bid,nvar,m,y,fy)
 call pifus_interpolate(nvar)
 call pifus_delete()
 !
 error=0;
 do i=1,m
    error=error+abs(fy(i)-myfunc(y(:,i),itype))
 enddo
 !
 write(6,*) 'error=',error/m
 !
 deallocate(x,y,fx,fy)
end program testpifus
