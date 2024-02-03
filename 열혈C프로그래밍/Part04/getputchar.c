#include <stdio.h>
int main(){
    int ch1, ch2;

    ch1=getchar();

    if(ch1>=65 && ch1<91) putchar(ch1+32);
    else if(ch1>=97 && ch1<123) putchar(ch1-32);
    else printf("ERROR : entered characters other than alphabets");

    printf("\n");

    return 0;
}