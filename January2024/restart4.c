#include <stdio.h>
int main(){
    int money=3500;
    printf("현재 당신이 소유하고 있는 금액 : %d\n", money);
    int cream=500, shrimp=700, cola=400;
    int a=1,b=1,c=1;
    int sum=cream*a+shrimp*b+cola*c;
    
    for(int a=1;cream*a+shrimp*b+cola*c<=money;a++){
        for(int b=1;cream*a+shrimp*b+cola*c<=money;b++){
            for(int c=1;cream*a+shrimp*b+cola*c<=money;c++){
                if(cream*a+shrimp*b+cola*c==money){
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개", a, b, c);
                    printf("\n");
                }
                else
                    continue;
            }
        }
    }
    printf("어떻게 구입하시겠습니까?\n");
    return 0;
}