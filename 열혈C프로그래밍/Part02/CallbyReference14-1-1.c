#include <stdio.h>

void SquareByReference(int* i){
    *i = *i * *i;
    printf("%d\n", *i);
}

int main(){
    int num;
    scanf("%d", &num);

    SquareByReference(&num);

    return 0;
}