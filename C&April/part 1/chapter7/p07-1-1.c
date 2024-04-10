#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int cnt = 0;
    while(cnt<num){
        printf("Hello world!\n");
        cnt++;
    }
    return 0;
}