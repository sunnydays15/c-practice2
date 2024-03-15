#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    int arrA[N][M], arrB[N][M];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &arrA[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &arrB[i][j]);
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", arrA[i][j]+arrB[i][j]);
        }
        printf("\n");
    }
}