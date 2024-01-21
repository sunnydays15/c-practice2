#include <stdio.h>
int main(){
    int second;
    printf("초(second) 입력: ");
    scanf("%d", &second);

    printf("[h:%d, m:%d, s:%d]\n", second/3600, (second%3600)/60, (second%3600)%60);

    return 0;
}