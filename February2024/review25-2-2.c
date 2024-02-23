#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i=0;
    int len = 5;
    int * arr = (int *)malloc(sizeof(int)*len);
    while(1){
        scanf("%d", &num);
        if(num==-1) break;

        arr[i]=num;
        i++;
        if(len==i){
            len+=3;
            arr = (int *)realloc(arr, sizeof(int)*len);
        }
    }
    int sum=0;
    for(int j=0; j<i; j++)
        sum+=arr[j];

    printf("%d\n", sum);

    free(arr);
    return 0;
}