#include <stdio.h>

int main(){
    int arr[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max = -1;
    int x = -1, y = -1;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", x, y);
}