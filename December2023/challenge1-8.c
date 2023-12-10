#include <stdio.h>

int exp(int num){
    if(num==0)
        return 1;
    
    int i = 2*exp(num-1);
    return i;
}

int main()
{
    int num;
    printf("정수 입력 : ");
    scanf("%d", &num);
    
    printf("2의 %d승은 %d \n", num, exp(num));
}
