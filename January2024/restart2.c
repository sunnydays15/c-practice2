#include <stdio.h>
int main(){
    int n1,n2;
    printf("두 숫자 입력: ");
    scanf("%d %d", &n1, &n2);

    int tmp;
    if(n1>n2){
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    for(;n1<=n2;n1++){
        for(int i=1; i<10; i++){
            printf("%d×%d=%d\n", n1, i, n1*i);
        }
    }
    return 0;
}