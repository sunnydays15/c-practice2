#include <stdio.h>
#include "stack.h"

void Push(int * top, char * S){
    (*top)++;
    printf("입력: ");
    scanf(" %c", S);
}

char Pop(int * top, char * S){
    char ch = *S;
    (*top)--;
    *S = 0;
    return ch;
}

void ShowAll(int top, char * arr){
    for(int i = 0; i<=top; i++)
        printf("%c ", arr[i]);

    if(top==-1) printf("스택에 저장된 것이 없습니다.\n");
}