#include <stdio.h>
#include <math.h> 

main()
{
float a;
float z1, z2;

scanf ("%lf", &a);	

z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
z2 = 4 * cos(a / 2) * cos(5 / 2 * a) * cos(4 * a);
	
printf ("%lf\n", z1);	
printf ("%lf", z2);		



}
