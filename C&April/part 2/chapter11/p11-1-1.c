#include <stdio.h>

int main(){
    int arr[5];
    for(int idx = 0; idx < 5; idx++){
        scanf("%d", &arr[idx]);
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    for(int idx = 0; idx < 5; idx++){
        if(max < arr[idx])
            max = arr[idx];
        if(min > arr[idx])
            min = arr[idx];
        sum += arr[idx];
    }
    printf("입력된 정수 중에서 최댓값 : %d\n", max);
    printf("입력된 정수 중에서 최솟값 : %d\n", min);
    printf("입력된 정수의 총 합 : %d\n", sum);

    return 0;
}