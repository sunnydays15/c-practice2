#include <stdio.h>

void MaxAndMin(int** M, int** m, int* arr){

    int* max, * min;

    max=min=&arr[0];   
    for(int i=0; i<5; i++){
        if(*max<arr[i]) max=&arr[i];
        if(*min>arr[i]) min=&arr[i];
    }
    *M=max;
    *m=min;
}

int main (){
    int * maxPtr;
    int * minPtr;
    int arr[5];

    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    MaxAndMin(&maxPtr, &minPtr, arr);

    printf("%-3d %p\n", *maxPtr, maxPtr);
    printf("%-3d %p\n", *minPtr, minPtr);

    return 0;
}