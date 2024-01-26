#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int R;
        scanf("%d", &R);

        char S[20];
        scanf("%s", S);

        int len=0;
        for(int i=0; S[i]!=0; i++)
            len++;

        for(int k=0; k<len; k++){
            for(int j=0; j<R; j++){
                printf("%c", S[k]);
            }
        }
        printf("\n");
    }
    
    return 0;
}