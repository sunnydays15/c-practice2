#include <stdio.h>

void SquareByValue(int i){
    i*=i;
    printf("%d\n", i);
}

int main(){
    int num;
    scanf("%d", &num);

    SquareByValue(num);

    return 0;
}