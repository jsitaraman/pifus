__device__
double scalarProduct(double a[3],double b[3],double c[3])
{
  double sp;
  sp= a[0]*b[1]*c[2] - a[0]*b[2]*c[1]
    +a[1]*b[2]*c[0] - a[1]*b[0]*c[2]
    +a[2]*b[0]*c[1] - a[2]*b[1]*c[0];
  return sp;
}

__device__
double computeCellVolume(double xv[8][3],int nvert)
{
  double vol;
  int itype;
  int nfaces;
  int numverts[4][6]={3,3,3,3,0,0,4,3,3,3,3,0,3,4,4,4,3,0,4,4,4,4,4,4};
  int faceInfo[4][24]={1,2,3,0,1,4,2,0,2,4,3,0,1,3,4,0,0,0,0,0,0,0,0,0,
                       1,2,3,4,1,5,2,0,2,5,3,0,4,3,5,0,1,4,5,0,0,0,0,0,
                       1,2,3,0,1,4,5,2,2,5,6,3,1,3,6,4,4,6,5,0,0,0,0,0,
                       1,2,3,4,1,5,6,2,2,6,7,3,3,7,8,4,1,4,8,5,5,8,7,6};
 switch(nvert)
   {
   case 4:
     itype=0;
     nfaces=4;
     break;
   case 5:
     itype=1;
     nfaces=5;
     break;
   case 6:
     itype=2;
     nfaces=5;
     break;
   case 8:
     itype=3;
     nfaces=6;
     break;
   }

 vol=0.0;
 for(int iface=0;iface<nfaces;iface++)
   {
     if (numverts[itype][iface]==3) {
       vol-=0.5*scalarProduct(xv[faceInfo[itype][4*iface+0]-1],
			      xv[faceInfo[itype][4*iface+1]-1],
			      xv[faceInfo[itype][4*iface+2]-1]);
     } else {
       vol-=0.25*scalarProduct(xv[faceInfo[itype][4*iface+0]-1],
			       xv[faceInfo[itype][4*iface+1]-1],
			       xv[faceInfo[itype][4*iface+2]-1]);
       vol-=0.25*scalarProduct(xv[faceInfo[itype][4*iface+0]-1],
			       xv[faceInfo[itype][4*iface+2]-1],
			       xv[faceInfo[itype][4*iface+3]-1]);
       vol-=0.25*scalarProduct(xv[faceInfo[itype][4*iface+0]-1],
			       xv[faceInfo[itype][4*iface+1]-1],
			       xv[faceInfo[itype][4*iface+3]-1]);
       vol-=0.25*scalarProduct(xv[faceInfo[itype][4*iface+1]-1],
			       xv[faceInfo[itype][4*iface+2]-1],
			       xv[faceInfo[itype][4*iface+3]-1]);
     }
   }
 vol/=3.0;
 // TODO:
 // this line is a kludge now to weaken off-body resolution
 // have to be fixed properly
 //
 if (itype==3) vol*=100;
 return vol;
}
