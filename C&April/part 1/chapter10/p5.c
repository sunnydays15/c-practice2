#include <stdio.h>

int main(){
    int num = 2;
    int cnt = 0;

    while(cnt < 10){
        int is_Prime = 1;
        for(int i=2; i<num; i++){
            if(num%i == 0){
                is_Prime = 0;
                break;
            }
        }
        if(is_Prime){
            printf("%d ", num);
            cnt++;
        }
        num++;
    }
    printf("\n");
    return 0;
}