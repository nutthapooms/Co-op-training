#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXCHAR 5

char * parseStringg(char* stringg){
    //char asdasd = "fuck it";
    char *inputString = stringg;
    printf("%s",inputString);
    char * asd = "fuck it";
    return asd;
}
int parseStringReInt(char* stringg){
    //char asdasd = "fuck it";
    char *inputString = stringg;
    printf("%s\n",inputString);
    char * asd = "fuck it";
    return inputString[0];
}

void randomPrint(){
    time_t timee;
    int n = 5;
    srand((unsigned) time(&timee));
    for( int i = 0 ; i < n ; i++ ) {
      printf("%c\n", (rand() % 50)+48);
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
    return 0;
}

