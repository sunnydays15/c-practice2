#include <stdio.h>

void Convert(int * cha){
    int diff = 'a' - 'A';

    if(*cha >= 'A' && *cha <= 'Z'){
        *cha += diff;
    }
    else if(*cha >= 'a' && *cha <= 'z')
        *cha -= diff;
    else
        *cha = -1;
}

int main(){
    int ch;
    ch = fgetc(stdin);
    Convert(&ch);
    
    if(ch == -1){
        fputs("Error", stdout); printf("\n");
        return -1;
    }
    
    fputc(ch, stdout); printf("\n");
    return 0;
}