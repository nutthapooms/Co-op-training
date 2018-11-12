#include <stdio.h>

#define MAXCHAR 5
int main() {
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "text.txt";

    fp = fopen(filename, "r+");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    fprintf(fp,"123111111111123123");
    while (fgets(str, MAXCHAR, fp) != NULL)
    printf("%s", str);
    fclose(fp);
    return 0;
}
