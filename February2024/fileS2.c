#include <stdio.h>
int main(){
    FILE * lab = fopen("mystory.txt", "at");

    fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", lab);
    fputs("#취미: 축구\n", lab);

    fclose(lab);

    return 0;
}