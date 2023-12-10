#include <stdio.h>
int main()
{
    int sum = 3500;
    printf("현재 당신이 소유하고 있는 금액 : %d", sum);

    int cream = 500, shi = 700, cola = 400;

    int i = 0;

    while(i < 3)
    {
        int a=1, b=1, c=1;

        while(1)
        {
        if(cream*a+shi*b+cola*c == sum){
            printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", a, b, c);
            break;
        }
        else{
            
        }
        }
        i++;
    }
}