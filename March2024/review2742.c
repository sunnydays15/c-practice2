#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    scanf("%s", str);
    
    printf("%u\n", strlen(str));
    
    return 0;
}