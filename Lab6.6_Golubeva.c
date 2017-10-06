#include <stdio.h>
#include <stdlib.h>
int main (void)
{ 
  double *u=malloc(4*sizeof(double));
  int i;
  
  u[0] = -3.4;
  u[1] =4.5;
  u[2] =-5.6;
  u[3] =6.7;
  
  for (i=0; i<4; i++)
  printf("%.1f ", *(u+i));
  
  free(u);
  return 0;
}
