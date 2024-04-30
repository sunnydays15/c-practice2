#include <stdio.h>

#define MAX(A,B) (((A) > (B)) ? (A) : (B))

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("둘 중 더 큰 값은 %d\n", MAX(n1, n2));

    return 0;
}