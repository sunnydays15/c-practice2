#include <stdio.h>
int main(){
    int num[7];
    for(int i=0;i<7;i++){
        printf("입력: ");
        scanf("%d", &num[i]);
    }
    for(int i=6;i>0;i--){
        for(int j=0;j<i;j++){
            int tmp;
            if(num[j]<num[j+1]){
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
            else
                continue;
        }
    }    
    for(int i=0;i<7;i++)
        printf("%d ", num[i]);
}