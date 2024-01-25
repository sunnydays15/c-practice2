#include <stdio.h>
int main(){
    int num[10];
    for(int i=0; i<10; i++)
        scanf("%d", &num[i]);
    
    int rem[10];
    for(int i=0; i<10; i++){
        rem[i]=num[i]%42;
    }

    int arr[10];
    int i=0;
    while(1){
        for(int j=0;j<10;j++){
            for(int i=0; i<10; i++){
                if(arr[j]!=rem[i]){
                    arr[j]=rem[i];
                    break;
                }
            }
            continue;
        }
    }

    return 0;
}