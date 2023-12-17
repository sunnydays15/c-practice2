#include <stdio.h>
int main()
{
    char str[50];
    printf("영단어 입력 : ");
    scanf("%s", str);

    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    printf("%d", i);

    // int Len = sizeof(str)/sizeof(char);
    // printf("%d \n", Len);
}