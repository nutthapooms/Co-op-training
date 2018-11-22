#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAXCHAR 5
void show_time (time_t epoch)
{
    struct tm *tm_info;
	char wday[6], day[8], month[9], year[10];
    tm_info = localtime(&epoch);
    strftime(wday , 6, "day %w", tm_info);	// %w : Weekday	0-6 	(Sunday as 0)
	strftime(day  , 8, "date %d", tm_info);	// %d : Day		01-31
    strftime(month, 9, "month %m", tm_info);	// %m : Month	01-12
    strftime(year , 10, "year %Y", tm_info);	// %Y : Year

    printf("epoch : %ld seconds since the epoch began (January 1, 1970)\n", (long)epoch);
    printf("%s", asctime(gmtime(&epoch)));
	printf("%s %s/%s/%s\n\n", wday, day, month, year);
}

char * parseStringg(char* stringg){ //parse string to string--------------------------------------------------------------------
    //char asdasd = "fuck it";
    char *inputString = stringg;
    printf("%s",inputString);
    char * asd = "fuck it";
    return asd;
}
int parseStringReInt(char* stringg){ //parse char to ascii---------------------------------------------------------------------
    //char asdasd = "fuck it";
    char *inputString = stringg;
    printf("%s\n",inputString);
    char * asd = "fuck it";
    return inputString[0];
}
void randomPrint(){ //random----------------------------------------------------------------------------------------------------------
    int n = 5;
    srand(time(NULL));
    for( int i = 0 ; i < n ; i++ ) {
      int random = rand()

      % 100+48;
      printf("%d = %c\n", random,random);
   }
}
int main() {
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "text.txt";

    fp = fopen(filename, "a+");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    fprintf(fp," add this part");
    fclose(fp);
    fp = fopen(filename, "r+");
    fgets(str, MAXCHAR, fp); //this will move file index
    char c = "";
    //while(c!= EOF){
    //    c = fgetc(fp);
    //    printf("%c \n",c);
    //}
    //parse string and return-------------------------------------------------------------------
    printf("%s \n", parseStringg(str));
    fclose(fp);
    //search word in file-------------------------------------------------------------------------
    fp=fopen("text.txt","r");
    char tmp[256]={0x0};
    int fileLine = 0;
    while(fp && fgets(tmp, sizeof(tmp), fp)!=NULL)
    {
        if (strstr(tmp, "hehe"))
            printf("hehe found on line: %d \n", fileLine);
        fileLine++;
    }
    fclose(fp);
    printf("%d\n",parseStringReInt("1")-48);
    randomPrint();

    show_time (0);
	show_time ((60*60*24)*17564); //number of day
	getch();
    return 0;
}

