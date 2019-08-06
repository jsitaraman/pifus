!
! Tioga is a library for overset grid assembly on parallel distributed systems
! Copyright (C) 2015 Jay Sitaraman
!
!>
!> Test code for Topology Independent Overset Grid Assembler (TIOGA)
!> 
!> Jay Sitaraman
!>
!> 03/05/2014
!>
program testTioga
  !
  use gridtype
  !
  implicit none
  !
  include 'mpif.h'
  !
  type(grid), target :: gr(2)
  type(grid), pointer :: g
  integer :: myid,numprocs,ierr,nsave
  integer :: itime,ntimesteps,iter,nsubiter
  real*8 :: t0
  integer :: blockid
  logical :: iclip
  integer :: ntypes
  integer :: nv1,nv2
  real*8 :: t1,t2
  integer :: i,n,m,ib,j
  real*8 :: xt(3),rnorm
  integer :: dcount,fcount
  integer, allocatable :: receptorInfo(:),inode(:)
  real*8, allocatable :: frac(:)
  !
  ! initialize mpi
  !
  call mpi_init(ierr)
  call mpi_comm_rank(mpi_comm_world,myid,ierr)
  call mpi_comm_size(mpi_comm_world,numprocs,ierr)
  !
  ! read grid based on that generated by the
  ! strand/Cart generator
  !
  if (myid==0) write(6,*) '# tioga test on ',numprocs,' processes'
  call readGrid_cell(gr(1),myid)
  call readGrid_cell(gr(2),myid+numprocs)
  if (myid==0) write(6,*) '# tioga test : finished reading grids'  
   !
  call mpi_finalize(ierr)
end program testTioga
