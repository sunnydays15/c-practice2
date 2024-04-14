#include <stdio.h>

int main(){
    int arr[5][5];

    // 성적 입력
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // 총점 계산
    for(int i = 0; i < 4; i++){
        int sumP = 0;
        int sumS = 0;
        for(int j = 0; j < 4; j++){
            sumP += arr[i][j];
            sumS += arr[j][i];
        }
        arr[i][4] = sumP;
        arr[4][i] = sumS;
    }
    int sum = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }
    arr[4][4] = sum;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}