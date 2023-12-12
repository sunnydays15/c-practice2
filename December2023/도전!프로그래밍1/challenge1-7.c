#include <stdio.h>
int exp(int k){
    int i = 2;
    while(k > 0){
        i = i*2;
        k--;
    }
    return i;
}
int main()
{
    int n, k = 0;
    printf("상수 n 입력 : ");
    scanf("%d", &n);

    while(exp(k) <= n){
        k++;
    }
    printf("공식을 만족하는 k의 최댓값은 %d \n", k);

    return 0;
}

