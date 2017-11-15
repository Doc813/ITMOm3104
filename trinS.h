#ifndef LAB11_TRINS_H
#define LAB11_TRINS_H
#include <math.h>
double area(double l1, double l2, double l3)
	{
double p;
double s;
{
	p = (l1 + l2 + l3) / 2;
	s = sqrt(p * (p - l1) * (p - l2) * (p - l3));
}
    return s;
	}

#endif 
