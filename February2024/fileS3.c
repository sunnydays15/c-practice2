#include <stdio.h>
int main(){
    FILE * fp = fopen("mystory.txt", "rt");

    char str[100];
    while(fgets(str, sizeof(str), fp)!=NULL){
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}