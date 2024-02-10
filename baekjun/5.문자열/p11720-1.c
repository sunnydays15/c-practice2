#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    char num[N];
    int sum=0;

    for(int i=0; i<N; i++){
        scanf(" %c", &num[i]);
        sum=sum+(num[i]-'0');
    }
    printf("%d\n", sum);

    return 0;
}