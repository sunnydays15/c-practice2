#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6};

    int * fptr = &arr[0];
    int * rptr = &arr[5];

    for(int i = 0; i < 3; i++){
        int tmp = *fptr;
        *fptr = *rptr;
        *rptr = tmp;
        fptr++;
        rptr--;
    }
    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}