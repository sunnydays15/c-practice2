#include <stdio.h>

void DesSort(int * ptr){
    int limit = 6;
    while(limit >= 0){
        for(int i = 0; i < limit; i++){
            if(ptr[i] < ptr[i+1]){
                int tmp = ptr[i];
                ptr[i] = ptr[i+1];
                ptr[i+1] = tmp;
            }
        }
        limit--;
    }
}

int main(){
    int arr[7];
    for(int idx = 0; idx < 7; idx++)
        scanf("%d", &arr[idx]);

    DesSort(arr);

    for(int idx = 0; idx < 7; idx++)
        printf("%d ", arr[idx]);
    printf("\n");

    return 0;
}