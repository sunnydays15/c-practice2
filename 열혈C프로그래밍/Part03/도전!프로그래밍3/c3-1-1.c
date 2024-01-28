#include <stdio.h>
int main(){
    int arr[4][4];
    int num=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][j]=num;
            num++;
        }
    }
    int much;
    scanf("%d", &much);

    for(int k=0; k<much; k++){
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                arr[j][3-i]=arr[i][j];
            }
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
30 20 10 00
31 21 11 01
32 22 12 02
33 23 13 03
*/