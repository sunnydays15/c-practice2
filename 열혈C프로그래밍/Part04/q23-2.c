#include <stdio.h>
typedef struct point{
    int xpos1;
    int ypos1;
    int xpos2;
    int ypos2;
}Rectangular;

void area(Rectangular rec){
    int width = (rec.xpos1-rec.xpos2)>0 ? (rec.xpos1-rec.xpos2) : (rec.xpos1-rec.xpos2)*-1 ;
    int length = (rec.ypos1-rec.ypos2)>0 ? (rec.ypos1-rec.ypos2) : (rec.ypos1-rec.ypos2)*-1 ;

    printf("넓이: %d\n", width*length);
}

void spotPosition(Rectangular rec){
    printf("직사각형을 이루는 네 점의 좌표정보:\n");
    printf("[%d, %d] [%d, %d] [%d, %d] [%d, %d]\n", rec.xpos1, rec.ypos1, rec.xpos2, rec.ypos1, rec.xpos1, rec.ypos2, rec.xpos2, rec.ypos2);
}

int main(){
    Rectangular rec={0, 0, 100, 100};

    area(rec);
    spotPosition(rec);

    return 0;
}