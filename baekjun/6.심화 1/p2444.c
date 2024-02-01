#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    char arr[N*2-1];

    int j=N-1, k=N-1;

    for(int s=0; s<2*N-1; s++) arr[s]=' ';
    
    while(k>=0){
        for(int i=k; i<=j; i++)
            arr[i]='*';

        for(int s=0; s<2*N-1; s++)
            printf("%c", arr[s]);
        
        printf("\n");
        k--;
        j++;
    }

    k++;
    j--;
    int p=j;

    while(k<N-1){
        for(int i=0; i<=k; i++)
            arr[i]=' ';
        for(int i=p; i<=j; i++)
            arr[i]=' ';

        for(int s=0; s<2*N-1; s++)
            printf("%c", arr[s]);
        
        printf("\n");
        p--;
        k++;
    }
    return 0;
}