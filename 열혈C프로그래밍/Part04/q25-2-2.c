#include <stdio.h>
#include <stdlib.h>
int main(){
    int N; int i=1;
    int * arr = (int *)malloc(sizeof(int)*5); //길이가 5인 int형 배열을 힙에 할당

    int cnt=0;
    while(N!=-1){
        scanf("%d", &N);
        arr[cnt]=N;
        cnt++;
        if((cnt-4)%3==0){
            arr=(int *)realloc(arr, sizeof(int)*(5+3*i));
            i++;
        }
    }
    for(int j=0; j<cnt; j++)
        printf("%d\n", arr[j]);

    free(arr);
    return 0;
}