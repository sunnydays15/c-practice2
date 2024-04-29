#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    int cnt = 0;
    int len = 5;
    
    int * arr = (int *)malloc(sizeof(int)*len);

    while(1){
        printf("입력: ");
        scanf("%d", &num);
        if(num == -1) break;

        arr[cnt] = num;

        cnt++;

        if(cnt == len){
            len += 3;
            arr = (int *)realloc(arr, sizeof(int)*len);
        }
    }
    
    for(int i = 0; i < cnt; i++)
        printf("%d ", arr[i]);
    
    printf("\n");

    free(arr);
    return 0;
}