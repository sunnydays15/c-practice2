#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}