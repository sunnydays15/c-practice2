#include <stdio.h>

int main(){
    int arr[3][9];

    // input
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            arr[i][j] = (i+2)*(j+1);
        }
    }

    // print
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}