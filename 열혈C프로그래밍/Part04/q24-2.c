#include <stdio.h>
int sizeF(FILE * fp){

    int fpos;
    fseek(fp, 0, SEEK_END);
    
    fpos=ftell(fp);
    fseek(fp, -fpos, SEEK_END);
    printf("현재 파일 위치 지시자 정보: %ld\n", ftell(fp));

    return fpos;
}

int main(){
    FILE* fp1 = fopen("tmp.txt", "wt");
    fputs("123456789", fp1);
    fclose(fp1);

    FILE* fp2 = fopen("tmp.txt", "rt");
    printf("파일의 크기 : %d\n", sizeF(fp2));
    fclose(fp2);

    return 0;
}