#include <stdio.h>
int main(){
    int arrA[2][4], arrB[4][2];

    int num=1;
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            arrA[i][j]=num;
            num++;
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            arrB[j][i]=arrA[i][j];
            num++;
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arrA[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d ", arrB[i][j]);
        }
        printf("\n");
    }
    return 0;
}