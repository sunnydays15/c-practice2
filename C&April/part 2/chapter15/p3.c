#include <stdio.h>
void Newarray(int * ptr){
    int parr[10];
    int * fptr = &parr[0];
    int * rptr = &parr[9];
    for(int idx = 0; idx < 10; idx++){
        if(ptr[idx]%2 == 0){
            *rptr = ptr[idx];
            rptr--;
        }
        else{
            *fptr = ptr[idx];
            fptr++;
        }
    }
    printf("배열 요소의 출력 : ");

    for(int idx = 0; idx < 10; idx++)
        printf("%d ", parr[idx]);
}

int main(){
    int arr[10];
    for(int idx = 0; idx < 10; idx++){
        printf("입력: ");
        scanf("%d", &arr[idx]);
    }
    
    Newarray(arr);
    return 0;
}