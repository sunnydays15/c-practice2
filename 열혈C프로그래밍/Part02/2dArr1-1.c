#include <stdio.h>
int main(){
    int arr[3][9];
    int dan=2;
    for(int i=0; i<3; i++){
        int j=0;
        while(j<9){
            for(int num=1;num<10;num++){
                arr[i][j]=dan*num;
                j++;
            }
        }
        dan++;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<9; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}