#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    getchar();

    int A, B;
    for(int i = 0; i < T; i++){
        scanf("%d %d", &A, &B);
        getchar();

        printf("Case #%d: %d + %d = %d\n", i+1, A, B, A+B);
    }
    return 0;
}