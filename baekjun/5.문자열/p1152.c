#include <stdio.h>
int main(){
    char str[1000000];

    for(int i=0; i<100000; i++){
        scanf("%s", str);

        for(int i=0; i<100000; i++)
            printf("%c", str[i]);
            
        if(str[i]==32){
            scanf("%s", str);
            continue;
        }
    }

    for(int i=0; i<100000; i++)
        printf("%c", str[i]);
}