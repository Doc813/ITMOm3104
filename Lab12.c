#include <stdio.h>
#include <time.h>
int main()
{
int i;
struct tm *date;
char StrDate[10];
const time_t today = time(NULL);

	FILE *fo;
   	fo = fopen("output.txt", "w"); 
	date = localtime(&today);
	
	for (i = 0; i < 10; i++)
  	{
  		time_t next = mktime(date);
  		date = localtime(&next);
  		strftime(StrDate, 11, "%d.%m.%Y", date);
  		fprintf(fo, "%s\n", StrDate);	
  		date -> tm_mday += 1;
  	}
fclose(fo);
}
