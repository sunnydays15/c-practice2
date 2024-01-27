#include <stdio.h>
int main(){
    int A, B;

    scanf("%d %d", &A, &B);

    int A100=A/100;

    int A10=(A%100)/10;

    int A1=A-A100*100-A10*10;

    int A0=A1*100+A10*10+A100;

    int B100=B/100;

    int B10=(B%100)/10;

    int B1=B-B100*100-B10*10;

    int B0=B1*100+B10*10+B100;

    int sol = (A0>B0) ? A0 : B0;

    printf("%d\n", sol);

    return 0;
}