#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand((int)time(NULL));

    // 컴퓨터 서로다른 숫자 3개 고르기
    int com[3];
    for(int i = 0; i < 3; i++)
        com[i] = rand()%10;

    while(com[1] == com[0])
        com[1] = rand()%10;
    while((com[2] == com[0]) || (com[2] == com[1]))
        com[2] = rand()%10;

    int user[3];
    int strike = 0, ball = 0;
    int cnt = 1;

    printf("Start Game!\n");
    while(strike < 3){
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &user[0], &user[1], &user[2]);

        strike = 0, ball = 0;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(com[i] == user[j]){
                    if(i == j) strike++;
                    else ball++;
                }
            }
        }
        printf("%d번째 도전 결과: %dstrike, %dball!!\n", cnt, strike, ball);
        cnt++;
    }
    printf("\n\nGame Over!\n");
    
    return 0;
}