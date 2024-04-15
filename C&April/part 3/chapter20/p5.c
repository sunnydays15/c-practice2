#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand((int)time(NULL));

    int you;
    int win = 0;
    int draw = 0;
    printf("바위는 1, 가위는 2, 보는 3: ");
    while(1){
        scanf("%d", &you);

        printf("당신은 ");
        if(you == 1)
            printf("바위 선택, ");
        else if(you == 2)
            printf("가위 선택, ");
        else
            printf("보 선택, ");

        int com = rand()%3+1;
        printf("컴퓨터는 ");
        if(com == 1)
            printf("바위 선택, ");
        else if(com == 2)
            printf("가위 선택, ");
        else
            printf("보 선택, ");

        if(you == com){
            printf("비겼습니다!\n");
            draw++;
        }
        else if((you == 1 && com == 2) || (you == 2 && com == 3) || (you == 3 && com == 1)){
            printf("이겼습니다!\n");
            win++;
        }
        else{
            printf("당신이 졌습니다!\n");
            break;
        }
    }
    printf("게임의 결과 : %d승, %d무\n", win, draw);
        
    return 0;
}