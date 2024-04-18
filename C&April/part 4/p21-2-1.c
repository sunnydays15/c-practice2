#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[20];

    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int sum = 0;

    for(int i = 0; i < len-1; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            sum += (int)(str[i]-'0');
        }
    }
    printf("%d\n", sum);

    return 0;
}