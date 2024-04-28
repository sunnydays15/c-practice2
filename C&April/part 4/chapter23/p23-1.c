#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

void SwapPoint(Point * ptr1, Point * ptr2){
    Point tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    // printf("[%d, %d]\n", ptr1->xpos, ptr1->ypos);
}

int main(){
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};
    SwapPoint(&pos1, &pos2);

    printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
    
    return 0;
}