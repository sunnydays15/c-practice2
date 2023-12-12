#include <stdio.h>

int main()
{
    int n1, n2;
    printf("두 개의 숫자 입력 : ");
    scanf("%d %d", &n1, &n2);

 

    if(n1 < n2){
        for(; n1<=n2; n1++){
            int num = 1;   
            for(num = 1; num<10; num++){
            printf("%d×%d=%d \n", n1, num, n1*num);
            }
        }
    }
    else{
        for(; n2<=n1; n2++){
            int num = 1;   
            for(num = 1; num<10; num++){
            printf("%d×%d=%d \n", n2, num, n2*num);
            }
        }
    }
    return 0;
}