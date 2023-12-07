// 음수나 0 을 칠때까지 프로그램이 실행됩니다. "프로그램이 종료됐습니다."
// 사용자는 scanf 로 숫자 하나를 받습니다
// 그러면 1부터 사용자가 입력한 숫자 범위 안에 있는 모든 홀수를 출력하시면 됩니다.
// for, continue 써야 됨

#include <stdio.h>
int main()
{
    int num = 1;

    while(num > 0)
    {
        printf("숫자 입력 : ");
        scanf("%d", &num);

        
        for(int i = 1 ; i <= num ; i++)
        {
            if(i%2 == 0) 
            {
                continue; 
            }
            printf("%d \n", i);

        }
    }
    printf("프로그램이 종료되었습니다. \n");
    return 0;
}
