#include <stdio.h>
int main(){
    FILE* fp = fopen("mystory.txt", "at");

    fputs("#즐겨먹는 음식 : 짬뽕, 탕수육 \n", fp);
    fputs("#취미 : 축구 \n", fp);

    fclose(fp);

    return 0;
}