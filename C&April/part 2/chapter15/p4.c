#include <stdio.h>
#include <string.h>

void Palindrome(char * str, int len){
    int check = len/2;
    int palid = 1;
    for(int idx = 0; idx <= check; idx++){
        if(str[idx] != str[len-1-idx]){
            palid = 0;
            break;
        }
    }
    if(palid == 1) printf("회문입니다.\n");
    else printf("회문이 아닙니다.\n");
}

int main(){
    char string[30];
    scanf("%s", string);

    int len = strlen(string);

    Palindrome(string, len);
    return 0;
}