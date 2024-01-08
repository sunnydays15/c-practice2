#include <stdio.h>

int main(){
    char str[100];
    printf("문자열 입력: ");
    scanf("%s", str);

    int len=0;
    for(int i=0; str[i]!=0; i++)
        len++;

    int i=0;
    while(str[i]==str[len-1]){
        if(str[i]==str[len-1]){
            i++;
            len--;
            if(i==len-1 || i+1==len-1)
                break;
        }
        continue;
    }
    if(i==len-1 || i+1==len-1)
        printf("회문 입니다.\n");
    else
        printf("회문이 아닙니다.\n");

    return 0;
}