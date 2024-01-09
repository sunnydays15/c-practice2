#include <stdio.h>

void DesSort(int* arr){
    int tmp;
    int j=6;
    for(int j=6; j>0; j--){

        for(int i=0; i<j; i++){

            if(arr[i]<arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
            else
                continue;
        }
    }
}

int main(){
    int num[7];
    for(int idx=0; idx<7; idx++){
        printf("입력 :");
        scanf("%d", &num[idx]);
    }

    DesSort(num);
    
    for(int idx=0; idx<7; idx++)
        printf("%d ", num[idx]);

    printf("\n");

    return 0;
}