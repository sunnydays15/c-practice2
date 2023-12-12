#include <stdio.h>
int isPrime(int num){
    int i = 2;
    while(i < num){
        if(num%i==0)
            return 1;
        i++;
    }
    return 0;
}

int main()
{
    int num =2;
    for(int cnt = 0; cnt < 10; cnt++){
        while(isPrime(num)){
            num++;
        }
        printf("%d \n", num);
        num++;
    }
}