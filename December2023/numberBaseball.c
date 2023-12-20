#include <stdio.h>
int main()
{
    int num[3];

    printf("세자리 정수를 각각 띄어서 입력하세요 : ");

    for(int i=0;i<3;i++) 
        scanf("%d", &num[i]);

    int ball=0, strike=0;

    for(int arr[3]; strike<3; ){

        ball=0, strike=0;

        printf("숫자를 맞혀주세요 : ");

        for(int i=0;i<3;i++) 
            scanf("%d", &arr[i]);

        for(int i=0; i<3; i++){

            for(int j=0; j<3; j++){

                if(arr[i]==num[j]){

                    if(i==j)
                        strike++;
                        
                    else
                        ball++;
                }
            } 
        }
        if(strike+ball==0)
            printf("OUT \n");
        else
            printf("%dB %dS \n", ball, strike);
    }
    printf("정답입니다. 답은 %d%d%d이었습니다. \n", num[0], num[1], num[2]);

    return 0;
}