#include <stdio.h>

int main(){
    int korean, english, math;
    scanf("%d %d %d", &korean, &english, &math);
    
    double sum = (double)(korean+english+math)/3;

    if(sum >= 90) printf("A\n");
    else if(sum >= 80) printf("B\n");
    else if(sum >= 70) printf("C\n");
    else if(sum >= 50) printf("D\n");
    else printf("F\n");

    return 0;
}