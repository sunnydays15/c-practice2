#include <stdio.h>

#define ADD(A, B, C)    ((A)+(B)+(C))
#define MUL(A, B, C)    ((A)*(B)*(C))

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("세 정수의 합: %d\n", ADD(a,b,c));
    printf("세 정수의 곱: %d\n", MUL(a,b,c));

    return 0;
}