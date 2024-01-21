#include <stdio.h>
int main(){
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    int i=1;
    int tmp=n;
    for(i=1;n>0;n--)
        i=i*2;
    printf("2의 %d승은 %d\n", tmp, i);

    return 0;
}