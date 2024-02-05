#include <stdio.h>
#include <string.h>

int main(){
    char str[1000002];
    fgets(str, sizeof(str), stdin);

    int fgap=0;
    while(str[fgap]==' ') fgap++;

    int bgap=strlen(str)-1;
    while(str[--bgap]==' ');

    int cnt=0;
    for(int i=fgap; i<=bgap;){
        if(str[i]==' '){
            if(i!=bgap) cnt++;
            while(str[i]==' ') i++;
        }
        else{
            if(i==bgap){
                cnt++;
                break;
            }
            i++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}