#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int cnt = 1;
    while(cnt <= num){
        printf("%d ", 3*cnt);
        cnt++;
    }
    printf("%c", '\n');
    return 0;
}