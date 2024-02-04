#include <stdio.h>
#include <string.h>
int main(){
    char str[1000000];
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1]=0;

    int fgap=0;
    while(str[fgap]==' ') fgap++;

    int bgap=strlen(str)-2;
    while(str[bgap]==' ') bgap--;

    int cnt=0;
    for(int i=fgap; i<=bgap;){
        if(str[i]==' '){
            cnt++;
            while(str[i]==' ') i++;
        }
        else i++;
    }
    printf("%d\n", cnt+1);

    return 0;
}