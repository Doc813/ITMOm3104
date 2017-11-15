#include <stdio.h>

int NOD (int a, int b)
	{	
	if (b == 0) return a;
	return NOD(b, a % b);
	}
	
int In_mssv(int n) 
{
int k = 0;
int i = 0;
int mas [100];
    
    while (n > 9) 
	{
        mas [k] = n % 10;
        n = n / 10;
        ++k;
    }
    mas [k] = n;
    ++k;
    for (i = 0; i < k/2; ++i) 
	{
        int ch;
        ch = mas [i];
        mas [i] = mas [k-i-1];
        mas [k-i-1] = ch;
    }
    for (i = 0; i < k; ++i)
	{
        printf("%d ", mas[i]);
    }
}

int main() 
{
int a, b;

	printf("Type two digits: ");
	scanf ("%d%d", &a, &b);
	printf("NOD(a,b): %d\n", NOD(a, b));
	printf("NOK(a,b): %d\n", a * b / NOD(a, b));
	
int n;

    printf("Type a number: ");
    scanf("%d", &n);
    In_mssv(n);

return 0;
}
