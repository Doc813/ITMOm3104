#include <stdio.h>
#include <stdlib.h>
int main (void)
{ 
 	double a[4] = {-3.4, 4.5 ,-5.6, 6.7};
	double *pointer=a;
	int i = 0;
	
	printf(" 1)");
	for(i = 0; i < 4; ++i) {
    printf("%.1f ",  *(pointer + i));
	}
   	printf("\n 2)");
   	
  	double *p=malloc(4*sizeof(double));
  
  	p[0] = -3.4;
  	p[1] =4.5;
  	p[2] =-5.6;
  	p[3] =6.7; 
  	for (i = 0; i < 4; ++i)
  	printf("%.1f ", *(p+i));
  
  	free(p);
	return 0;
}
