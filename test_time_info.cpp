#include <stdio.h>
#include <conio.h>
#include <time.h>
void show_time (time_t);
int main(void)
{
	show_time (0);
	show_time ((60*60*24)*17532);	
	getch();
}
void show_time (time_t epoch)
{
    struct tm *tm_info;
	char wday[2], day[3], month[3], year[5];
    tm_info = localtime(&epoch);
    strftime(wday , 2, "%w", tm_info);	// %w : Weekday	0-6 	(Sunday as 0)
	strftime(day  , 3, "%d", tm_info);	// %d : Day		01-31	
    strftime(month, 3, "%m", tm_info);	// %m : Month	01-12
    strftime(year , 5, "%Y", tm_info);	// %Y : Year

    printf("epoch : %ld seconds since the epoch began (January 1, 1970)\n", (long)epoch);
    printf("%s", asctime(gmtime(&epoch)));
	printf("%s %s/%s/%s\n\n", wday, day, month, year);
}
