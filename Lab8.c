#include <string.h>
#include <stdio.h>

int main(void) {
	char str1[255], str2[255];
	printf("Type first string:");
	scanf("%s", str1);
	printf("Type second string:");
    scanf("%s", str2);
  	printf(" 1. %s\n", strncat(str1, str2, strlen(str2)));

int n;
	memset(str2, 0, sizeof(str2));
	printf("Type the string:");
    scanf("%s", str1);
    printf("Type the number of characters:");
    scanf("%d", &n);
    strncpy(str2, str1, n);
    printf(" 2. %s\n", str2);
    
    printf("Type the string:");
    scanf("%s", str1);
	printf (" 3. %d\n", strlen(str1) );
    
     printf("Type first string:");
	scanf("%s", str1);
	printf("Type second string:");
    scanf("%s", str2);
    printf(" 4. ", strstr(str1, str2)-str1+1);
    
    printf("Type first string:");
	scanf("%s", str1);
	printf("Type second string:");
    scanf("%s", str2);
    printf(" 5. %d", strcspn(str1, str2));
    
    return 0;
}


