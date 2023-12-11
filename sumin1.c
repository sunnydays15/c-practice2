// 입력받은 정수의 약수를 전부 찾아주는 프로그램을 작성하시오.


#include <stdio.h>

int main()
{
    int num;
    printf("숫자 입력 : ");
    scanf("%d", &num);

    for(int i=1; i<=num ; i++ ){
        if(num%i==0)
            printf("%d \n", i);
    }
}
