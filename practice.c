#include <stdio.h>
int main()
{
    int Kor, Eng, Math;

    printf("차례대로 국어, 영어, 수학 성적을 기입하시오. : ");
    scanf("%d %d %d", &Kor, &Eng, &Math);

    int sum = (Kor + Eng + Math)/3;

    if(sum >= 90)
        printf("A \n");

    else if(sum < 90 && sum >= 80)
        printf("B \n");

    else if(sum < 80 && sum >= 70)
        printf("C \n");
        
    else if(sum < 70 && sum >= 50)
        printf("D \n");

    else
        printf("F \n");                                 
}