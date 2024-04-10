#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int cnt = 0;
    int num, sum = 0;
    while(cnt < N){
        scanf("%d", &num);
        sum += num;
        cnt++;
    }
    printf("%f\n", (double)sum/N);

    return 0;
}