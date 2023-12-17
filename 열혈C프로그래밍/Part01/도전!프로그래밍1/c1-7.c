#include <stdio.h>
int main()
{
    int n;
    printf("n값 입력 : ");
    scanf("%d", &n);

    int k = 0, i = 1;

    for(i=1; i<n; i++){
        i*=2;
        k++;
    }

    printf("공식을 만족하는 k의 최댓값은 %d \n", k);
}