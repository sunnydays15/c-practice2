#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int basket[N];
    for(int cnt=0;cnt<N;cnt++){
        basket[cnt]=cnt+1;
    }
    int i,j;
    for(int cnt=0;cnt<M;cnt++){
        scanf("%d %d", &i, &j);

        while(i<j){
            int tmp=basket[i-1];
            basket[i-1]=basket[j-1];
            basket[j-1]=tmp;
            i++;
            j--;
        }
    }
    for(int cnt=0;cnt<N;cnt++)
        printf("%d ", basket[cnt]);
    printf("\n");
    return 0;
}