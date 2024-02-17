#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len=strlen(str);
    str[len-1]=0;
    for(int i=len; i>0; i--){
        if(str[i]==' '){
            printf("%s ", &str[i+1]);
            str[i]=0;
        }
    }

    printf("%s\n", &str[0]);

    return 0;
}