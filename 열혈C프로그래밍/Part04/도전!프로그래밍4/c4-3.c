#include <stdio.h>
typedef struct point{
    double real;
    double imagin;
}Complex;

void Add(Complex num1, Complex num2){
    printf("합의 결과] 실수: %f, 허수: %f\n", num1.real+num2.real, num1.imagin+num2.imagin);
    return;
}

void Multiple(Complex num1, Complex num2){
    double MulR=num1.real*num2.real-num1.imagin*num2.imagin;
    double MulI=num1.real*num2.imagin+num1.imagin*num2.real;
    printf("곱의 결과] 실수: %f, 허수: %f\n", MulR, MulI);
    return;
}

int main(){
    Complex arr[2];

    for(int i=0; i<2; i++){
        printf("복소수 입력%d[실수 허수]: ", i+1);
        scanf("%lf %lf", &arr[i].real, &arr[i].imagin);
    }
    Add(arr[0], arr[1]);
    Multiple(arr[0], arr[1]);

    return 0;
}