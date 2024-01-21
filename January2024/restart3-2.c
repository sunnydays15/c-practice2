#include <stdio.h>
int main(){
    int num[10];
    for(int i=0;i<10;i++){
        printf("입력: ");
        scanf("%d" ,&num[i]);
    }

    int arr[10];
    int a=0, b=0;
    for(int i=0;i<10;i++){
        if(num[i]%2==1){
            arr[a]=num[i];
            a++;
        }
        else{
            arr[9-b]=num[i];
            b++;
        }
    }
    printf("배열 요소의 출력 : ");
    for(int i=0; i<10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}