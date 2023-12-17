#include <stdio.h>
int main()
{
    char str[100];
    printf("영단어 입력 : ");
    scanf("%s", str);

    int cnt = 0;
    while(str[cnt] != 0){
        cnt++;
    }
    printf("%s의 단어길이는 %d \n", str, cnt);
    return 0;
}