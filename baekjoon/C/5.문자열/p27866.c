#include <stdio.h>
int main(){
    char S[1000];
    scanf("%s", S);

    int i;
    scanf("%d", &i);

    printf("%c\n", S[i-1]);

    return 0;
}