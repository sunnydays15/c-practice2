#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};

    int * ptr = &arr[4];

    for(int i = 0; i < 5; i++){
        *(ptr-i) -= 1;
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}