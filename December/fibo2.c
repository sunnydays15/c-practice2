#include <stdio.h>

int Fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n > 1)
        return (Fibo(n - 1) + Fibo(n - 2));
}

int main()
{
    int num;
    printf("몇 개의 피보나치 수열을 나열할까요? ");
    scanf("%d", &num);

    int i = 0;
    
    while(i < num)
    {
        printf("%d \n", Fibo(i));
        i++;
    }
    return 0;
}