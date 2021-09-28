program testpifus
 implicit none
 real*8, allocatable :: x(:,:)
 real*8, allocatable :: y(:,:)
 real*8, allocatable :: fx(:),fy(:)
 integer :: n,itype,bid,nvar,m
 character*10 :: nstr,itypestr,device
 real*8 :: error
 real*8 :: myfunc,t1,t2
 integer :: i
 integer :: nseed
 integer,allocatable :: seed(:)
 !
 if (iargc() < 2) then
    write(6,*) 'Usage : testpifus <npts> <function> <device>'
    stop
 endif
 !
 call getarg(1,nstr)
 read(nstr,*) n
 call getarg(2,itypestr)
 read(itypestr,*) itype
 if (iargc()==3) then
  call getarg(3,device)
  if (index(device,'cpu')==0 .and. index(device,'gpu')==0) then
     write(6,*) 'Unknown device :',device
     stop
  endif
 else
  device='cpu'
 endif
 !
 allocate(x(3,n),fx(n))
 allocate(y(3,n),fy(n))

 ! seed the random number generator for reproducible data
 call random_seed(size=nseed)
 allocate(seed(nseed))
 seed = 4 ! set all elements to 4
 call random_seed(put=seed)

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
 m=1
 call pifus_init()
 call pifus_use_timer()
 call pifus_register_source(bid,x,n)
 call pifus_register_source_solution(bid,nvar,fx)
 call pifus_register_targets(bid,nvar,m,y,fy)
 call cpu_time(t1)
 call pifus_interpolate(nvar,device)
 call cpu_time(t2)
 !write(6,*) 'Total time = ',t2-t1
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
 deallocate(seed)
end program testpifus
