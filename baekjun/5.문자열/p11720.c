#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int num;
    scanf("%d", &num);

    int arr[N];
    int i=0, n=N;

    for(int n; n>0; n--){
        int tmp1=num, tmp2=n;

        for(; tmp2>1; tmp2--){
            tmp1/=10;
        }
        arr[i]=tmp1;
        i++;
    }
    
    for(int j=0; j<N; j++)
        printf("%d ", arr[i]);
    
    printf("\n");
    
    return 0;
}