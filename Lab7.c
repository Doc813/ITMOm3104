#include <stdio.h>
#include <math.h>
 
 
enum press{book = 1,
		booklet,
		journal,
		newspaper};
		
			
struct point{double x;	double y;};
struct rectangle{struct point a;struct point b;struct point c;};
double sq(struct rectangle rect){
	double a = sqrtf((rect.b.x-rect.a.x)*(rect.b.x-rect.a.x)+(rect.b.y - rect.a.y)*(rect.b.y - rect.a.y));
	double b = sqrtf(pow(rect.c.x - rect.a.x, 2) + pow(rect.c.y - rect.a.y, 2));
	return(a*b);
};

    
    union status{
    struct{
        unsigned rec  : 1;
        unsigned pause: 1;
        unsigned play : 1;
    }bits;
    unsigned char data;
};
union status MyStat;
int main()
{
	printf(" 1) %d\n", journal);
	struct rectangle rect;
	rect.a.x = 1;
	rect.a.y = 1;
	rect.b.x = 1;
	rect.b.y = 3;
	rect.c.x = 5;
	rect.c.y = 1;
	printf(" 2) %lf\n 3)", sq(rect));



    scanf("%x", &(MyStat.data));
    printf("\n rec  :%s", (MyStat.bits.rec  )?"on":"off");
    printf("\n pause:%s", (MyStat.bits.pause)?"on":"off");
    printf("\n play :%s", (MyStat.bits.play )?"on":"off");
    getchar();
return 0;
}

