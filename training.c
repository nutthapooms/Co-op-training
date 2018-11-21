#include <stdio.h>
#include <string.h>
#define MAXCHAR 5

char * parseStringg(char* stringg){
    char * asd = "asdasdasd";
    return asd;
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
    //fprintf(fp,"1asdasd23");
    fclose(fp);
    fp = fopen(filename, "r+");
     fgets(str, MAXCHAR, fp);
    char c = "";
    while(c!= EOF){
        c = fgetc(fp);
        printf("%d \n",c);
    }

    printf("%s \n", parseStringg(str));
    fclose(fp);

    fp=fopen("text.txt","r");
    char tmp[256]={0x0};
    while(fp && fgets(tmp, sizeof(tmp), fp))
    {
        if (strstr(tmp, "haha"))
            printf("%s", tmp);
        else if (strstr(tmp, "hehe"))
            printf("%s", tmp);
    }
    if(fp) fclose(fp);
    return 0;
}

