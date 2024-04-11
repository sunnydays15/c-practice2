#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    int bigger = (n1>n2)? n1 : n2;
    int smaller = (n1>n2)? n2 : n1;

    for(; smaller <= bigger; smaller++){
        for(int num = 1; num < 10; num++){
            printf("%d×%d=%d\n", smaller, num, smaller*num);
        }
        printf("\n");
    }
    return 0;
}