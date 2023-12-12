#include <stdio.h>

int main()
{
    int n1, n2;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &n1, &n2);

    int gcd = 1;

    for(int i = 1; i <= n1 && gcd <= n2; i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
            continue;
        }
    }
    printf("두 수의 최대공약수 : %d \n", gcd);
    return 0;
}
