#include <stdio.h>
int main(){
    int num;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    int tmp=num;
    int len=0;
    while(1){
        if(tmp>1){
            tmp=tmp/2;
            len++;
        }
        else
            break;
    }


    int arr[len+1];

    for(int i=len;i>=0;i--){
        if(num%2==1){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
        num=num/2;
        continue;
    }

    for(int i=0;i<=len;i++)
        printf("%d", arr[i]);

    printf("\n");

    return 0;
}