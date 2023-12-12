#include <stdio.h>

int IsPrime(int num);

int main()
{
    // int num = 2;
    // for(int i = 0 ; i < 10 ; i++){
    //     for(int j = 2 ; j<num; j++){
    //         if(num%j==0){

    //         }
    //     }
    //     printf("%d \n", num);
    //     num++;
    // }

    int cnt = 0;
    for(int i = 2 ; cnt < 10 ; i++){
        if(IsPrime(i)){
            printf("%d\n", i);
            cnt++;
        }
    }
}

// 소수 판별 함수
int IsPrime(int num){
    for(int i = 2; i < num ; i++){
        if(num%i==0) {
            // printf("iterations: %d\n", i-1);
            return 0;
        }
    }
    // printf("iterations: %d\n", num-1);
    return 3;
}