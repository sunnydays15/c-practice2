#include <stdio.h>

typedef struct{
    double real;
    double imaginary;
}Complex_Number;

int main(){
    Complex_Number num1, num2;

    printf("복소수 입력1[실수 허수]: ");
    scanf("%lf %lf", &num1.real, &num1.imaginary);
    printf("복소수 입력2[실수 허수]: ");
    scanf("%lf %lf", &num2.real, &num2.imaginary);
    
    printf("합의 결과] 실수: %f, 허수: %f\n", num1.real+num2.real, num1.imaginary+num2.imaginary);
    printf("곱의 결과] 실수: %f, 허수: %f\n", num1.real*num2.real - num1.imaginary*num2.imaginary, num1.real*num2.imaginary+num2.real*num1.imaginary);
    
    return 0;
}