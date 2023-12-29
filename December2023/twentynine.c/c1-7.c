#include <stdio.h>
int main(){
    int n;
    printf("상수 n 입력 : ");
    scanf("%d", &n);

    int sum=1;
    int k=0;

    for(;sum<=n;k++){
        sum*=2;
    }
    printf("공식을 만족하는 k의 최댓값은 %d\n", k-1);
    return 0;
}