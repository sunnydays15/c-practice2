#include <stdio.h>
int main()
{
    int second;
    printf("초(second) 입력 : ");
    scanf("%d", &second);

    int hour = second/3600;
    int min = (second%3600)/60;
    int sec = (second%3600)%60;

    printf("[h:%d, m:%d, s:%d]\n", hour, min, sec);
    
    return 0;
}