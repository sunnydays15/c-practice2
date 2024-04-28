#include <stdio.h>

struct point{
    int xpos;
    int ypos;
};

int main(){

    int arr[100][100];    // 흰색 도화지
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            arr[i][j] = 0;
        }
    }

    int paper;
    scanf("%d", &paper);

    for(int a = 0; a < paper; a++){
        struct point black;
        scanf("%d %d", &black.xpos, &black.ypos);

        for(int i = black.xpos; i < black.xpos+10; i++){
            for(int j = black.ypos; j < black.ypos+10; j++){
                arr[i][j] = 1;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(arr[i][j] == 1)
                sum++;
        }
    }
    printf("%d\n", sum);
}