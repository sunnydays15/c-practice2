#include <stdio.h>

void Fibonacci(int count){
    int num1 = 0;
    int num2 = 1;
    if(count == 1){
        printf("%d\n", num1);
        return;
    }
    else{
        printf("%d %d ", num1, num2);
    }
    for(int i=3; i<=count; i++){
        int num3 = num1 + num2;
        int tmp = num2;
        num2 = num3;
        num1 = tmp;
        printf("%d ", num3);
    }
    printf("\n");
}

int main(){
    int num;
    scanf("%d", &num);

    Fibonacci(num);
    return 0;
}