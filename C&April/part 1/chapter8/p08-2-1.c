#include <stdio.h>

int main(){
    for(int i = 2; i < 10; i++){
        if(i%2 != 0) continue;

        for(int j = 1; j <= i; j++){
            printf("%d×%d=%d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}