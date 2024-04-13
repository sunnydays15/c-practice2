#include <stdio.h>

int main(){
    char voca[30];
    scanf("%s", voca);

    char max = voca[0], idx = 0;
    while(voca[idx] != '\0'){
        if(max < voca[idx])
            max = voca[idx];
        
        idx ++;
    }
    printf("%c\n", max);
    return 0;
}