#include <stdio.h>
int main(){
    int num[10];
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        num[i] %=42;
    }
    for(int j=9; j>0; j--)
    for(int i=0; i<j; i++){
        int tmp;
        if(num[i]>num[i+1]){
            tmp=num[i];
            num[i]=num[i+1];
            num[i+1]=tmp;
        }
    }
    int cnt=1;
    int tmp=num[0];
    for(int i=0; i<10; i++){
        if(tmp<num[i]){
            tmp=num[i];
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
