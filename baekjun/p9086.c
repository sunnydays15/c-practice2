#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    char str[1000];
    int i=0;

    while(i<T){
        int len=0;
        scanf("%s", str);
        i++;

        for(int j=0; str[j]!=0; j++) len++;
        
        printf("%c%c\n", str[0],str[len-1]);   
    }

    return 0;
}