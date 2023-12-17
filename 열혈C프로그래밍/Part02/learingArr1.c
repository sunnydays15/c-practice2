#include <stdio.h>
int main()
{
    int num[5];
    for(int i=0; i<5; i++){
        printf("정수 입력 : ");
        scanf("%d", &num[i]);
    }
    int max=num[0], min=num[0];
    int sum=0;

    for(int i=0; i<5; i++){
        if(max < num[i]) max = num[i];
        if(min > num[i]) min = num[i];
        sum += num[i];
    }
    printf("입력된 정수 중에서 최댓값 : %d \n", max);
    printf("입력된 정수 중에서 최솟값 : %d \n", min);
    printf("입력된 정수의 총 합 : %d \n", sum);   
}