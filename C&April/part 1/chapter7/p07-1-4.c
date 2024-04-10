#include <stdio.h>

int main(){
    int dan;
    scanf("%d", &dan);

    int num = 9;
    while(num>0){
        printf("%d×%d=%d\n", dan, num, dan*num);
        num--;
    }
    return 0;
}