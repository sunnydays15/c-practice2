#include <stdio.h>
int main(){
    int arr[5][5]={
        {5,4,6,5},
        {3,6,9,3},
        {4,8,2,7},
        {3,8,9,7}
    };
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][4]+=arr[i][j];
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[4][i]+=arr[j][i];
        }
    }
    for(int i=0; i<4; i++){
        arr[4][4]+=arr[i][4];
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}