#include <stdio.h>
#include <string.h>
int Checker(char * ptr){
    int len = strlen(ptr);
    for(int i=0; i<len; i++){
        for(int j=0; j<i; j++){
            if(ptr[j]==ptr[i]){
                for(int k=j; k<i; k++){
                    if(ptr[k]!=ptr[i])
                        return 0;
                    else
                        continue;
                }
            }
        }
    }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);
    
    char str[100];
    int sum=0;
    for(int i=0; i<N; i++){
        scanf("%s", str);
        sum+=Checker(str);
    }

    printf("%d\n", sum);
    return 0;
}