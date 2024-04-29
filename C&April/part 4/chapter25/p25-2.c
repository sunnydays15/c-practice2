#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    printf("문자열의 최대길이를 입력하시오: ");
    scanf("%d", &len);
    getchar();

    char str1[len];
    fgets(str1, len, stdin);
    str1[strlen(str1)-1] = 0;

    len = strlen(str1)-2;

    char * str2 = (char *)malloc(sizeof(char)*len);  // 힙 영역

    for(; len >= 0 ; len--){
        if(str1[len] == ' '){
            str2 = strcat(str2, &str1[len+1]);
            str2 = strcat(str2, " ");
            str1[len] = 0;
        }
        else if(len == 0){
            str2 = strcat(str2, &str1[0]);
        }
    }
    printf("%s\n", str2);

    free(str2);
    return 0;
}