#include <stdio.h>
int Multiply2(int sum, int num){
    if(num == 0)
        return sum;

    num--;
    sum *= 2;
    Multiply2(sum, num);
}

int main(){
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);
    int sum = 1;

    printf("2의 %d승은 %d\n", n, Multiply2(sum, n));
    return 0;
}