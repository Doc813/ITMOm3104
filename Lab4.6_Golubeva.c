#include <stdio.h>

int num1, num2;
int main(void)
 {
 
printf("Enter first number:");
scanf("%d", &num1);
printf("%d\n", num1 >= 76 && num1 <= 78);

printf("Enter second number:");
scanf("%d", &num2);
printf("%d", (num2 & 64) == 64);

return 0;
} 
