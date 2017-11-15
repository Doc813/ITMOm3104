#include <stdio.h>

int num, num1, num2;

int main(void)
{
	printf("Enter first number:");
    scanf("%x", &num);
    printf("2) %d \n", num);
    printf("3) %x, %x \n", num, num >> 2);
	printf("4) %x, %x\n", num, ~num1);
    printf("Enter second number:");
	scanf("%x", &num2);
    printf("5) %x", num | num2);
    return 0;
}
