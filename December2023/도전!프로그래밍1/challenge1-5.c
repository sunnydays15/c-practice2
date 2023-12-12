#include <stdio.h>
// 1. 소수 판별
// 2. 소수 10개 출력

// 소수 판별 함수 구현 -> int prime(int i);

int Prime(int num){
    int i = 2;
    while(i <= num)
    {
        if(num%i == 0)
            break;
        else{
            i++;
        }
    }
    if(i == num){
        printf("%d \n", num);
        return 1;
    }
    if(num == 2){
        printf("%d \n", num);
        return 1;
    }
    else
        return 0;
}
// 소수 10개를 찾을 때 까지 소수 판별 함수 반복 -> main 함수에 반복문으로 구현
int main(){
    int num = 2;
    int j = 0;
    while(j < 10)
    {
        j+=Prime(num);
        num++;
    }
    return 0;
}
//int func() 반환과 호출 동시 주의!
