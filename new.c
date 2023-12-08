#include <stdio.h>
int  main()
{
    int num;
    printf("몇 개의 피보나치 수열을 나열할까요? : ");
    scanf("%d", &num);

    int i = 0;
    int a = 0, b = 1;
    int c;
    while(i < num)
    {
    if(i == 0)
            printf("%d \n", a);
    if(i == 1)
            printf("%d \n", b);
    if(i > 1)
    {
        c = a + b;
        printf("%d \n", c);
        a = b;
        b = c;
    }
        i++;
    }
    return 0;
}
