#include <stdio.h>

int main(){
    int num;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    printf("16진수 형태는 %#x\n", num);
    return 0;
}