#include <stdio.h>

int main()
{
    int num1, num2;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    int GCD = 1; // num1과 num2의 최대공약수가 되어야 함
    // 조건 1 : GCD는 num1과 num2보다 작아야 함(GCD >= 1)
    // 조건 2 : num1%GCD = 0 && num2%GCD = 0
    while(1) // while 조건에 1을 지정하면 무한루프
    {
        if(num1%GCD==0 && num2%GCD==0 && GCD > 1){
            printf("%d \n", GCD);
            break;
        }
        else if(GCD == num1 || GCD == num2){
            printf("1 \n");
            break;
        }

        else{
            GCD++;
            continue;
        }
    }
    return 0;
}