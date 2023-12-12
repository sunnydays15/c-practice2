#include <stdio.h>

int exp(int n){
    int i = 1;
    for(; n>0; n--){
        i*=2;
    }
    return i;
}

int main()
{
    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);

    printf("2의 %d승은 %d \n", n, exp(n));
    return 0;
}