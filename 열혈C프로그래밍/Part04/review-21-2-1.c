#include <stdio.h>

int main(){
    char str[30];
    scanf("%s", str);

    int sum = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i]-'0' >= 0 && str[i]-'0' <= 9)
            sum += str[i]-'0';
    }
    printf("%d\n", sum);

    return 0;
}