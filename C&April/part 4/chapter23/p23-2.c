#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

typedef struct{
    Point leftdown;
    Point rightup;
}Rectangular;

void Square(Rectangular * ptr){
    printf("직사각형의 넓이: ");
    int square = ((ptr->rightup).xpos-(ptr->leftdown).xpos) * ((ptr->rightup).ypos-(ptr->leftdown).ypos);
    printf("%d\n", square);
}

void Position(Rectangular * ptr){
    fputs("네 점의 좌표정보: ", stdout);
    printf("[%d, %d] ", (ptr->leftdown).xpos, (ptr->leftdown).ypos);
    printf("[%d, %d] ", (ptr->leftdown).xpos, (ptr->rightup).ypos);
    printf("[%d, %d] ", (ptr->rightup).xpos, (ptr->leftdown).ypos);
    printf("[%d, %d] ", (ptr->rightup).xpos, (ptr->rightup).ypos);
    printf("\n");
}

int main(){
    Rectangular point;

    fputs("좌 하단 좌표: ", stdout);
    scanf("%d %d", &point.leftdown.xpos, &point.leftdown.ypos);
    fputs("우 상단 좌표: ", stdout);
    scanf("%d %d", &point.rightup.xpos, &point.rightup.ypos);

    Square(&point);
    Position(&point);

    return 0;
}