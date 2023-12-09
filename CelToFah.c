#include <stdio.h>
double CelToFah(double);
double FahToCel(double);

int main()
{
    double Cel, Fah;

    printf("화씨로 변환할 섭씨 온도 : ");
    scanf("%lf", &Cel);
    printf("섭씨로 변환할 화씨 온도 : ");
    scanf("%lf", &Fah);

    printf("섭씨 온도 %f → 화씨 온도 %f \n", Cel, CelToFah(Cel));
    printf("화씨 온도 %f → 섭씨 온도 %f \n", Fah, FahToCel(Fah));

    return 0;
}

double CelToFah(double Cel)
{
    double Fah = 1.8*Cel + 32;
    return Fah;
}

double FahToCel(double Fah)
{
    double Cel = (Fah - 32)/1.8;
    return Cel;
}

