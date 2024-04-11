#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int i = 1;
    int GCD;
    while(i <= num1 || i <= num2){
        if(num1%i == 0 && num2%i == 0) GCD = i;
        i++;
    }
    printf("%d\n", GCD);
    return 0;
}