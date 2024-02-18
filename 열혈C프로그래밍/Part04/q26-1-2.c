#include <stdio.h>
#define PI  3.1415
#define AREA(r) (((r)*(r))*PI)
int main(){
    double rad;
    scanf("%lf", &rad);

    printf("반지름 길이가 %f인 원의 넓이는 %f", rad, AREA(rad));

    return 0;
}