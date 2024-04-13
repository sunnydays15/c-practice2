#include <stdio.h>
#include <string.h>

int main(){
    char voca[30];
    scanf("%s", voca);

    int len = strlen(voca);
    int cmp = len/2;

    for(int i = 0; i < cmp; i++){
        char tmp = voca[i];
        voca[i] = voca[len-1-i];
        voca[len-1-i] = tmp;
    }
    printf("%s\n", voca);
    return 0;
}