#include <stdio.h>
int palindrome(int front, int back, char* ptr){
    while(1){
        if(front>back){
            return 1;
        }
        else if(ptr[front]==ptr[back]){
            front++;
            back--;
        }
        else
            return 0;
    }
}

int main(){
    char str[100];
    scanf("%s", str);

    int len;
    int front=0;
    for(int i=0; str[i]!=0; i++)
        len=i;

    printf("%d\n", palindrome(front, len, str));

    return 0;
}