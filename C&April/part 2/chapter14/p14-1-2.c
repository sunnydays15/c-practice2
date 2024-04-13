#include <stdio.h>
void Swap3(int * ptr1, int * ptr2, int * ptr3){
    int tmp1 = *ptr2;
    int tmp2 = *ptr3;
    *ptr2 = *ptr1;
    *ptr3 = tmp1;
    *ptr1 = tmp2;
}

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    Swap3(&num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
}