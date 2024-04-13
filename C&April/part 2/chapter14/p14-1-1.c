#include <stdio.h>
int SquareByValue(int N){
    return N*N;
}

int SquareByReference(int * ptr){
    *ptr *= *ptr;
    return *ptr;
}

int main(){
    int num;
    scanf("%d", &num);

    printf("%d\n", SquareByValue(num));
    printf("%d\n", SquareByReference(&num));

    return 0;
}