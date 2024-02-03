#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    char str2[20];
    char str3[40];

    int len1, len2;
    fgets(str1, sizeof(str1), stdin);
    len1=strlen(str1);
    str1[len1-1]=0;

    fgets(str2, sizeof(str2), stdin);
    len2=strlen(str2);
    str2[len2-1]=0;

    strcpy(str3, str1);
    strcat(str3, str2);

    puts(str3);

    return 0;
}