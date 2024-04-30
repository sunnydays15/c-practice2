#include <stdio.h>

#define PI 3.141592

#define AREA(rad) ((rad)*(rad))*PI

int main(){
    int rad;
    scanf("%d", &rad);

    printf("원의 넓이: %f", AREA(rad));

    return 0;
}