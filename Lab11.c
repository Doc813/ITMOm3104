#include <stdio.h>
#include <math.h>
#include "trinP.h"
#include "trinS.h"
double length (int x1, int y1, int x2, int y2)
{
double len;
	len = sqrt( (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) );
return len;	
}
int main()
{
	struct Tringle_Info
	{				
	int	x [3];
	int	y [3];
	double P, S;
	double l1, l2, l3;
	} tringle;
	int i;
	 printf("Type coordinates of Triangle:\n");
	 for (i = 0; i < 3; ++i)
	 {
	 	printf("x%d y%d: ", i + 1, i + 1);
        scanf("%d%d", &tringle.x [i], &tringle.y [i]);
	 }
		tringle.l1 = length(tringle.x [0], tringle.y [0], tringle.x [1], tringle.y [1]);
		tringle.l2 = length(tringle.x [1], tringle.y [1], tringle.x [2], tringle.y [2]);
		tringle.l3 = length(tringle.x [0], tringle.y [0], tringle.x [2], tringle.y [2]);
		tringle.P = perimeter (tringle.l1, tringle.l2, tringle.l3);
		tringle.S = area (tringle.l1, tringle.l2, tringle.l3);
		printf("Tringle P: %f\n Tringle S: %f\n", tringle.P, tringle.S);
	
return 0;
}
