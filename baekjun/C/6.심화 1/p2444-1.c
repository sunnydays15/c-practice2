#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int SPACE = N-1;
    int space[2*N-1];
    int star[2*N-1];

    for(int i=0; i<N; i++)
        space[i]=SPACE--;
    for(int i=N; i<2*N-1; i++)
        space[i]=++SPACE+1;
    for(int i=0; i<N; i++)
        star[i]=2*i+1;
    for(int i=N; i<2*N-1; i++)
        star[i]=-2*i+4*N-3;

    for(int i=0; i<2*N-1; i++){
        while(space[i]>0){
            printf(" ");
            space[i]--;
        }
        while(star[i]>0){
            printf("*");
            star[i]--;
        }
        printf("\n");
    }
    
    return 0;
}