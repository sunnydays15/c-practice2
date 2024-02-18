#include <stdio.h>
#include <stdlib.h>

int main(){
    int flen=5;
    int idx=0;
    int * arr=(int *)malloc(sizeof(int)*flen);

    while(1){
        scanf("%d", &arr[idx]);
        if(arr[idx]==-1)
            break;

        if(idx+1==flen){
            flen+=3;
            arr=(int *)realloc(arr, sizeof(int)*flen);
        }
        idx++;
    }
    for(int i=0; i<idx; i++)
        printf("%d\n", arr[i]);
    
    free(arr);
    return 0;
}