#include <stdio.h>
int main()
{
    char str[100];
    printf("영단어 입력 : ");
    scanf("%s", str);

    int i=0;
    int max = str[0];

    while(str[i] != 0){
        if(max < str[i]) max = str[i];
        i++;
    }
    printf("%c \n", max);
    return 0;
}