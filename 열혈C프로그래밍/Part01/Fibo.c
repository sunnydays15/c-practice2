// 수를 입력하면 그 수만큼 피보나치 수열 나열

#include <stdio.h>

int Fibo(int i){
    if(i==0)
        return 0;
    if(i==1)
        return 1;
    if(i>1)
        return Fibo(i-1)+Fibo(i-2);
}


int main()
{
    int num;
    printf("몇 개의 피보나치 수열을 나열할까요? ");
    scanf("%d", &num);

    for(int i = 0; i < num ; i++){
        printf("%d \n", Fibo(i));
    }
}