#include <stdio.h>
int Factorial(int);

int main()
{
    int num;
    printf("몇 팩토리얼을 보여줄까요? : ");
    scanf("%d", &num);

    printf("%d! = %d \n", num, Factorial(num));

    return 0;
}

int Factorial(int num)
{
    if(num == 0)
        return 1;
    else
    {
        num = num*Factorial(num - 1);
    }    

}