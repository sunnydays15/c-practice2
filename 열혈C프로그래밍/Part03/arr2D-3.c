#include <stdio.h>

int record[5][5];

void WriteScore(void){
    printf("국어, 영어, 수학, 국사 순으로 성적을 입력하시오.\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &record[i][j]);
            record[i][4]+=record[i][j];
        }
        
    }
}

void WriteSumRecord(void){

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            record[4][j]+=record[i][j];
        }
        record[4][4]=record[4][4]+record[i][4];
    }
}

void ShowAllRecord(void){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%5d", record[i][j]);
        }
        printf("\n");
    }
}

int main(){
    WriteScore();
    WriteSumRecord();
    ShowAllRecord();
    return 0;
}