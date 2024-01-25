#include <stdio.h>
void Compare(int**dPtr1, int** dPtr2, int* a){
    int* max,* min;
    max=min=&a[0];

    for(int i=0; i<5; i++){
        if(*max<a[i]) max=&a[i];
        if(**dPtr2>a[i]) min=&a[i];
    }
    *dPtr1=max;
    *dPtr2=min;
}

int main(){
    int* maxPtr;
    int* minPtr;
    int arr[5];
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    Compare(&maxPtr, &minPtr, arr);

    printf("maxPtr에 저장된 값: %d\nmaxPtr의 주소값: %p\n", *maxPtr, maxPtr);
    printf("minPtr에 저장된 값: %d\nminPtr의 주소값: %p\n", *minPtr, minPtr);
    
    return 0;
}