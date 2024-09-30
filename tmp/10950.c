#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    getchar();

    int A,B;
    for(int i = 0; i < T; i++){
        scanf("%d %d", &A, &B);
        getchar();
        printf("%d\n", A+B);
    }
    return 0;
}