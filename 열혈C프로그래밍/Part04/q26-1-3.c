#include <stdio.h>
#define MAX(A, B)   ((A)>(B)? (A) : (B))

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    printf("두 값 중 더 큰 값은 %d입니다.\n", MAX(a, b));

    return 0;
}