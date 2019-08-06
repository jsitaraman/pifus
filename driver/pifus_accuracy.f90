program pifus_accuracy
 implicit none
 real*8, allocatable :: x(:,:)
 real*8, allocatable :: y(:,:)
 real*8, allocatable :: fx(:),fy(:)
 integer :: n,itype,bid,nvar,m
 character*10 :: functiontype,device
 real*8 :: error0,error,dx0,dx,slope
 real*8 :: myfunc
 integer :: i,h
 !
 if (iargc() < 1) then
    write(6,*) 'Usage : pifus_accuracy <functiontype> <device>'
    stop
 endif
 !
 call getarg(1,functiontype)
 if (iargc()==2) then
  call getarg(2,device)
  if (index(device,'cpu')==0 .and. index(device,'gpu')==0) then
     write(6,*) 'Unknown device :',device
     stop
  endif
 else
  device='cpu'
 endif
 itype=1 
 if (index(functiontype,'linear')       > 0) itype=1
 if (index(functiontype,'quadratic')    > 0) itype=2
 if (index(functiontype,'trig') > 0) itype=3
 write(6,*) 'itype=',itype
 !
 n=125
 do h=1,6
   n=n*8
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
  call pifus_interpolate(nvar,device)
  call pifus_delete()
  !
  dx0=dx
  error0=error;
  dx=(125d0/n)**(1./3)
  error=0
  do i=1,m
    error=error+abs(fy(i)-myfunc(y(:,i),itype))
  enddo
  error=error/m
  !
  if (h==1) then
   write(6,"(A10,1x,A15,1x,A15,1x,A15,1x,A15)") 'N','dx','error','error-ratio','slope'
   write(6,"(1x,I10,4(1x,E15.7))") n,dx,error
  else
   slope=(log(error0)-log(error))/(log(dx0)-log(dx))
   write(6,"(1x,I10,4(1x,E15.7))") n,dx,error,error/error0,slope
  endif
  !
  deallocate(x,y,fx,fy)
 enddo
end program pifus_accuracy
