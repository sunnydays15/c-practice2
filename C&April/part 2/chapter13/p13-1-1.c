#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};

    int * ptr = &arr[0];

    for(int i = 0; i < 5; i++){
        *ptr += 2;
        ptr++;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}