#include <stdio.h>
#include<string.h>
int main()
{
char str[255];
int len, i;
int CapLet = 0;
int LowLet = 0;
int Num = 0;

    scanf("%s", str);
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if((str[i]>='0' && str[i]<='9')) 
			Num++;
		if((str[i]>='A' && str[i]<='Z')) 
			CapLet++;
		if((str[i]>='a' && str[i]<='z')) 
			LowLet++;
    }
	printf("Capital Letters: %d\n", CapLet);
	printf("Lowercase Letters: %d\n", LowLet);
	printf("Numerals: %d\n", Num);
	
	
	int d;

    printf("Type digit: ");
    scanf("%d", &d);

    switch (d) 
	{
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
	}
    return 0;
}
