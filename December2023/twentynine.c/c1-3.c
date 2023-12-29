#include <stdio.h>
int main(){
    int num1, num2;
    printf("두 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    int gcd;
    int num = (num1<num2)? num1 : num2;
    for(int i=1;i<=num;i++){
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    printf("두 수의 최대공약수 : %d\n", gcd);

    return 0;
}