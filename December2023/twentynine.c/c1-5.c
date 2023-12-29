#include <stdio.h>
int main(){
    int cnt=0;

        for(int i=2; cnt<10; i++){
            for(int j=2; j<=i; j++){
                if(i%j==0 && j!=i)
                    break;
                else if(i==j){
                    printf("%d ", j);
                    cnt++;
                }
            }
        }
    printf("\n");
    return 0;
}