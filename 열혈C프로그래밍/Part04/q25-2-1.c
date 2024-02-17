#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int maxlen, len, i;
    char* str;
    printf("문자열의 최대 길이 입력: ");
    scanf("%d", &maxlen);
    getchar();  //  \n문자 삭제
    str=(char*)malloc(sizeof(char)*(maxlen+1));

    printf("문자열 입력: ");
    fgets(str, maxlen+1, stdin);
    str[strlen(str)-1]=0;   //  \n문자 삭제
    len=strlen(str);
    for(i=len; i>0; i--){
        if(str[i]==' '){
            printf("%s ", &str[i+1]);
            str[i]=0;
        }
    }
    printf("%s\n", &str[0]);
    free(str);
    return 0;
}