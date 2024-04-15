#include <stdio.h>

void SpinArr(int (*ptr)[4], int spin){

    int newArr[4][4];
    // 초기화
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            newArr[i][j] = ptr[i][j];
        }
    }

    // 돌리기
    for(int a = 0; a < spin; a++){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                newArr[j][3-i] = ptr[i][j];
            }
        }
        // 복사
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                ptr[i][j] = newArr[i][j];
            }
        }
    }

    // 출력
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%-3d", ptr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[4][4];

    // 초기화
    int num = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            arr[i][j] = num;
            num++;
        }
    }

    // 돌리는 횟수
    int spin;
    scanf("%d", &spin);
    spin = spin%4;

    // 돌리는 함수 구현
    SpinArr(arr, spin);
    return 0;
}