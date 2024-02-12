/* <조건>

- 전공평점 : 학점×과목평점 의 합
- 과목평점 환산 표
- P인 과목은 count 안함
- 학점 -> 1.0 2.0 3.0 4.0
- 적어도 한 과목은 등급이 p가 아님
*/
#include <stdio.h>
typedef struct {
    char subName[50];
    double score;
    double grade;
}subject;

void Convert(char* Gptr, double* gptr){
    if(Gptr[0]=='A'){
        if(Gptr[1]=='+') *gptr=4.5;
        else *gptr=4.0;
    }
    else if(Gptr[0]=='B'){
        if(Gptr[1]=='+') *gptr=3.5;
        else *gptr=3.0;
    }
    else if(Gptr[0]=='C'){
        if(Gptr[1]=='+') *gptr=2.5;
        else *gptr=2.0;
    }
    else if(Gptr[0]=='D'){
        if(Gptr[1]=='+') *gptr=1.5;
        else *gptr=1.0;
    }
    else if(Gptr[0]=='F')
        *gptr=0;
    else
        *gptr=-1;

}

int main(){
    subject arr[20];
    char Grade[20];
    int cntP=0;

    for(int i=0; i<20; i++){
        scanf("%s %lf %s", arr[i].subName, &arr[i].score, Grade);
        Convert(Grade, &arr[i].grade);
    }

    for(int i=0; i<20; i++){
        if(arr[i].grade<0)
            arr[i].score=0;
        else
            continue;
    }

    double sumE=0;
    for(int i=0; i<20; i++)
        sumE+=arr[i].score*arr[i].grade;

    double sumS=0;
    for(int i=0; i<20; i++)
        sumS+=arr[i].score;
    
    printf("%f\n", sumE/sumS);

    return 0;
}