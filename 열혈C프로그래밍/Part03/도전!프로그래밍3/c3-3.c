#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int i=0;
    while(i<5){
        num = rand();
        if(num<100){
            printf("난수 출력: %d \n", num);
            i++;
        } 
        else continue;
    }
    return 0;
}