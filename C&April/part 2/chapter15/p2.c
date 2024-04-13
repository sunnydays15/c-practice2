#include <stdio.h>

int main(){
    int num;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    // -1로 배열 선언 및 초기화
    int arr[20];
    for(int idx = 0; idx < 20; idx++)
        arr[idx] = -1;

    int i = 0;
    while(num > 0){
        int idx = 0;
        int cnt = 1;
        while(num >= cnt){
            cnt *= 2;
            idx++;
        }
        if(cnt != 1) num -= cnt/2;
        else num -= cnt;
        arr[i] = idx-1;
        i++;
    }
    int sum = 0;
    for(int idx = 0; arr[idx] != -1; idx++){
        int cnt = 1;
        for(int i = 0; i < arr[idx]; i++)
            cnt *= 10;
        sum += cnt;
    }

    // 배열 확인
    printf("%d\n", sum);
    
    return 0;
}