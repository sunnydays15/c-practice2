#include <stdio.h>
int main(){
    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);

    int sum=1;

    for(int i=0; i<n; i++){
        sum*=2;
    }
    printf("2의 %d승은 %d\n", n, sum);
}