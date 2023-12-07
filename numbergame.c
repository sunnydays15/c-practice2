//숫자 맞추기 게임
// 아무한테나 scanf 로 1 부터 100까지의 숫자 중 하나를 입력받습니다. (secretNum)
// "숫자를 맞춰주세요 : " << 입력 받고
// 만약에 숫자가 secretNum 보다 크면 숫자가 시크릿넘버보다 큽니다
// 작으면 시크릿 넘버보다 작습니다.
// 맞추면 " 정답입니다! 답은 secretNum 이었습니다!"

// 조건 : 목숨이 있습니다. 5개 있습니다
// 틀리면 목숨이 하나씩 까이고. 5개 다 까이면 "탈릭입니다! 답은 ~ 였습니다" 하고 종료

#include <stdio.h>
int main()
{
    int secretNum, num;
    int chance = 5;
    printf("1부터 100까지의 숫자 중 하나를 골라주세요 : ");
    scanf("%d", &secretNum);
    printf("%d은(는) 비밀숫자입니다. 정답의 기회는 총 5번입니다. \n", secretNum);

    while(chance > 0)
    {
        printf("숫자를 맞춰주세요 : ");
        scanf("%d", &num);

        if(num < secretNum)
        {
            chance--;
            if(chance == 0)
                break;
            
            printf("숫자가 비밀 숫자보다 작습니다. 기회가 %d번 남았습니다. \n", chance);
            continue;
        }
        
        if(num > secretNum)
        {
            chance--;
            if(chance == 0)
                break;
            
            printf("숫자가 비밀 숫자보다 큽니다. 기회가 %d번 남았습니다. \n", chance);
            continue;
        }

        if(num = secretNum)
            break;
    }

    if(chance == 0)
        printf("탈락입니다! 답은 %d였습니다. \n", secretNum);
    else
        printf("정답입니다! 답은 %d이었습니다! \n", secretNum);

    return 0;
}