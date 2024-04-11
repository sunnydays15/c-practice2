#include <stdio.h>

double CelToFah(double Cel){
    return 1.8*Cel + 32;
}

double FahToCel(double Fah){
    return (Fah - 32)/1.8;
}

int main(){
    double temp;
    printf("온도 입력: ");
    scanf("%lf", &temp);

    int num;
    printf("1) 섭씨 -> 화씨  2) 화씨 -> 섭씨\n");
    scanf("%d", &num);

    if(num == 1) printf("%f\n", CelToFah(temp));
    else printf("%f\n", FahToCel(temp));

    return 0;
}