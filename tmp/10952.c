#include <stdio.h>

int main(){
    int A, B;
    while(1){
        scanf("%d %d", &A, &B);
        getchar();
        if(A == 0 && B == 0) return 0;
        else printf("%d\n", A+B);
    }
    return 0;
}