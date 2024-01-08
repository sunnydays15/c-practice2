#include <stdio.h>
void Swap3(int* a, int* b, int* c){
    int tmp1, tmp2;
    tmp1 = *b;
    tmp2 = *c;
    *b = *a;
    *c = tmp1;
    *a = tmp2;
}

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    Swap3(&num1, &num2, &num3);

    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}