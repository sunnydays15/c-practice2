#include <stdio.h>

int main(){
    int money = 3500;
    int cream = 500, shri = 700, cola = 400;
    int sum = 0;
    printf("현재 당신이 소유하고 있는 금액 : 3500\n");
    for(int a = 1; a <= 7; a++){
        for(int b = 1; b <= 5; b++){
            for(int c = 1; c <= 8; c++){
                sum = cream*a + shri*b + cola*c;;
                if(sum == money){
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", a, b, c);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까?\n");
    return 0;
}