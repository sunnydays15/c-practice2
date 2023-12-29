#include <stdio.h>
int main(){
    int num1, num2;
    printf("두 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    int NUM=(num1>num2)? num1 : num2;
    int num=(num1<num2)? num1 : num2;

    for(;num<=NUM;num++){
        for(int i=1;i<10;i++){
            printf("%d×%d=%d\n", num,i,num*i);
        }
    }
    return 0;
}