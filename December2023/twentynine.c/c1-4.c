#include <stdio.h>
int main(){
    printf("현재 당신이 소유하고 있는 금액 : 3500\n");
    int cream=500, shir=700, cola=400;
    int a=1,b=1,c=1;
    for(int a=1;a<5;a++){
        for(int b=1;b<4;b++){
            for(int c=1;c<6;c++){
                if(cream*a+shir*b+cola*c==3500) 
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", a, b, c);
            }
        }
    }
    printf("어떻게 구입하시겠습니까?\n");
    return 0;
}