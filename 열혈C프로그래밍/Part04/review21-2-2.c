#include <stdio.h>
#include <string.h>

int main(){
    char str1[20];
    char str2[20];
    char str3[40];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int len = strlen(str1);
    str1[len-1] = 0;

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("%s", str3);
    return 0;
}