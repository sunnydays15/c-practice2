#include <stdio.h>
void rotation(int (*arr)[4], int N){
    if(N==0) return;

    int dlp[4][4]={0};
    for(int k=0; k<N; k++){
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                dlp[j][3-i]=arr[i][j];
            }
        }
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                arr[i][j]=dlp[i][j];
            }
        }
    }
}

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
    
    rotation(arr, much);

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}