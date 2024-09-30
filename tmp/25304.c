#include <stdio.h>

int main(){
    int X, N;
    scanf("%d %d", &X, &N);
    getchar();

    int sum = 0;
    int a, b;
    for(int i = 0; i < N; i++){
        scanf("%d %d", &a, &b);
        getchar();
        sum += a*b;
    }
    if(sum == X){
        printf("Yes\n");
    }
    else printf("No\n");

    return 0;
}