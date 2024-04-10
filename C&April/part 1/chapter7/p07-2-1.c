#include <stdio.h>

int main(){
    int num;
    int sum = 0, cnt = 0;
    while(cnt < 5){
        scanf("%d", &num);
        while(num < 1){
            printf("1이상을 입력\n");
            scanf("%d", &num);
        }
        sum += num;
        cnt++;
    }
    printf("%d\n", sum);
    return 0;
}