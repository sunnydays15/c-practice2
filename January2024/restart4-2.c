#include <stdio.h>
int main(){
    char str[100];
    printf("문자열 입력: ");
    scanf("%s", str);

    int len;

    for(int i=0;str[i]!=0;i++){
        len=i;
    }

    char* start=&str[0];
    char* end=&str[len];

    int i=0;
    for(;i<len/2;i++){
        int tmp;
        if(*start!=*end)
            break;
        else{
            start++;
            end--;
        }
    }
    if(i==len/2)
        printf("회문 입니다.\n");
    else
        printf("회문이 아닙니다.\n");

    return 0;
}