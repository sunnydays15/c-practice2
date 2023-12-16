// 최소공배수 찾기
#include <stdio.h> 
int main()
{
    int num1, num2;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    int i = (num1 < num2) ? num2 : num1;
    for(; i>=num1 && i>=num2; i++){
        if(i%num1==0 && i%num2==0){
            printf("최소공배수는 %d \n", i);
            break;
        }
    }
    return 0;
}