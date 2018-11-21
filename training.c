#include <stdio.h>

#define MAXCHAR 4
int main() {
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "text.txt";

    fp = fopen(filename, "a+");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    fprintf(fp,"1asdasd23");
    fclose(fp);
    fp = fopen(filename, "r+");
    fgets(str, MAXCHAR, fp);
    printf("%s", str);
    fclose(fp);
    return 0;
}

