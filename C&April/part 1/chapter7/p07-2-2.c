#include <stdio.h>

int main(){
    int num;
    int line = 0;
    while(line < 5){
        num = 1;
        while(num <= line){
            printf("o");
            num ++;
        }
        printf("*\n");
        line++;
    }
    return 0;
}