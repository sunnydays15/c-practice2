#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int maxlen, len;
    printf("문자열의 최대길이 입력: ");
    scanf("%d", &maxlen);
    getchar();

    char * str=(char *)malloc(sizeof(char)*(maxlen+1));
    fgets(str, maxlen+1, stdin);
    len=strlen(str);
    str[len-1]=0;

    for(int i=len-1; i>0; i--){
        if(str[i]==' '){
            printf("%s ", &str[i+1]);
            str[i]=0;
        }
    }
    printf("%s\n", &str[0]);

    free(str);
    return 0;
}