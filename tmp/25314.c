#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    getchar();

    N = N/4;

    for(int i = 0; i < N; i++){
        printf("long ");
    }
    printf("int\n");

    return 0;
}