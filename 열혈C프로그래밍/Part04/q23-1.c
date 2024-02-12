#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

void SwapPoint(Point* ptr1, Point* ptr2){
    int tmp1,tmp2;
    
    tmp1=ptr1->xpos, tmp2=ptr1->ypos;

    *ptr1=*ptr2;
    
    ptr2->xpos=tmp1, ptr2->ypos=tmp2;
}

void ShowPosition(Point pos1, Point pos2){
    printf("pos1: [%d, %d]\npos2: [%d, %d]\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}

int main(){
    Point pos1={2, 4};
    Point pos2={5, 7};

    SwapPoint(&pos1, &pos2);

    ShowPosition(pos1, pos2);

    return 0;
}