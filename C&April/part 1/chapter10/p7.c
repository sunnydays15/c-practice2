#include <stdio.h>

int main(){
    int n;
    printf("상수 n 입력: ");
    scanf("%d", &n);

    int k = 0;
    int sum = 1;
    while(1){
        sum = 1;
        for(int i = 0; i < k; i++){
            sum *= 2;
        }
        if(sum > n) break;
        k++;
    }
    printf("공식을 만족하는 k의 최댓값은 %d\n", k-1);
    return 0;
}