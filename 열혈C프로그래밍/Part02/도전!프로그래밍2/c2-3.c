#include <stdio.h>
int main(){
    int num[10];
    printf("총 10개의 숫자 입력\n");
    for(int idx=0; idx<10; idx++){
        printf("입력: ");
        scanf("%d", &num[idx]);
    }
    // for(int idx=0; idx<10; idx++){
    //     printf("%d ", num[idx]);
    // }
    int arr[10];
    int i=0, j=9;
    for(int idx=0; idx<10; idx++){

        if(num[idx]%2!=0){
            arr[i]=num[idx];
            i++;
        }
        else{
            arr[j]=num[idx];
            j--;
        }
    }
    printf("배열 요소의 출력 :");
    for(int idx=0; idx<10; idx++)
        printf("%d ", arr[idx]);
    
    printf("\n");
    return 0;
}
