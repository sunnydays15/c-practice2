#include <stdio.h>

int main()
{
    int dan1, dan2;
    printf("몇 단부터 몇 단까지? : ");
    scanf("%d %d", &dan1, &dan2);

    if(dan1 < dan2)
    {
        for( ; dan1 <= dan2 ; dan1++)
        {
            int num = 1;
            for(; num < 10 ; num++)
            {
                printf("%d×%d=%d \n", dan1, num, dan1*num);
            }
        }
    }
    else
    {
        for( ; dan2 <= dan1 ; dan2++)
        {
            int num = 1;
            for(; num < 10 ; num++)
            {
                printf("%d×%d=%d \n", dan2, num, dan2*num);
            }
        }
    }
    return 0;
}