#include <stdio.h>

 int main(void) 
{
 int a[6]={34, 45, 56, 67, 75, 89};
 int i = 0;
 
 	for (i = 0; i < 6; ++i) {
  	printf("%d; ", a[i]);
 	}
  	printf("\n");

 int m_A[2][2]={1, 1, 0, 1},
	 m_B[2][2]={2, 0, 3, 0},
     m_C[2][2];
     int j = 0;
     int k = 0;
     int mn = 0;			
     
  		for (i = 0; i < 2; ++i) {
  		for (j = 0; j < 2; ++j) {
 			mn = 0;
 		for (k = 0; k < 2; ++k)	{
  		mn += m_A[i][k] * m_B[k][j];
    	}
		m_C[i][j] = mn;
    	}
	    }
  
 	for (i = 0; i < 2; i++)	{
    for (j = 0; j < 2; j++) {
      printf("%d ", m_C[i][j]);
    }
    printf("\n");
    }
    return 0;
}
