#include <stdio.h>
#include <string.h>
struct point{
    char name[50];
    double S;
    double score;
};

double Conv(char* ptr){
    
    char Ap[] = "A+";    char A[] = "A0";
    char Bp[] = "B+";    char B[] = "B0";
    char Cp[] = "C+";    char C[] = "C0";
    char Dp[] = "D+";    char D[] = "D0";
    // char P[] = "P";    char F[] = "F";
    // if(!strcmp(ptr, Ap)) return 4.5;
    // else if(!strcmp(ptr,A)) return 4.0;
    // else if(!strcmp(ptr,Bp)) return 3.5;
    // else if(!strcmp(ptr,B)) return 3.0;
    // else if(!strcmp(ptr,Cp)) return 2.5;
    // else if(!strcmp(ptr,C)) return 2.0;
    // else if(!strcmp(ptr,Dp)) return 1.5;
    // else if(!strcmp(ptr,D)) return 1.0;
    // //else if(!strcmp(ptr,F)) return 0.0;
    // else return -1;
    printf("%s\n", ptr);
    return 0;
}

int main(){
    struct point arr[20];
    char* score;
    int cntP=0;

    for(int i=0; i<20; i++){
        scanf("%s %lf %s", arr[i].name, &arr[i].S, score);
        arr[i].score = Conv(score);
        if(arr[i].score==-1){
            cntP++;
            arr[i].score=0;
        }
    }

    double sum=0;
    for(int i=0; i<20; i++)
        sum += arr[i].S * arr[i].score;
    
    printf("%lf", sum/20-cntP);

    return 0;
}