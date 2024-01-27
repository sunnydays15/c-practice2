#include <stdio.h>
int main(){
    int arr[3][9];

    for(int i=2; i<5; i++){
        for(int j=1; j<10; j++){
            arr[i-2][j-1]=i*j;
        }
    }
    for(int i=2; i<5; i++){
        for(int j=1; j<10; j++){
            printf("%3d ", arr[i-2][j-1]);
        }
        printf("\n");
    }
    return 0;
}