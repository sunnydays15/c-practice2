#include <stdio.h>
int main()
{
    char str[100];
    printf("영단어 입력 : ");
    scanf("%s", str);

    int len = 0;
    while(str[len] != 0){
        len++;
    }

    for(int i=0;i<=len;i++){
        printf("%c",str[len-i]);
    }
    printf("\n");
}