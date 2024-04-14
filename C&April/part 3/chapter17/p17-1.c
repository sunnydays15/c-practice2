#include <stdio.h>

void MaxandMin(int **dmax, int ** dmin, int * ptr){
    int * max = &ptr[0], * min = &ptr[0];

    for(int i = 0; i < 5; i++){
        if(*max < ptr[i]) 
            max = &ptr[i];
        if(*min > ptr[i]) 
            min = &ptr[i];
    }
    *dmax = max;
    *dmin = min;
}

int main(){
    int * maxPtr;
    int * minPtr;
    int arr[5];
    for(int idx = 0; idx < 5; idx++)
        scanf("%d", &arr[idx]);

    MaxandMin(&maxPtr, &minPtr, arr);
    printf("%d %d\n", *maxPtr, *minPtr);
    return 0;
}