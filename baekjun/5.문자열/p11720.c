#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    long long num;
    scanf("%lld", &num);

    int arr[N];
    for(int i=0; i<N; i++){
        int cnt=0;

        for(;num%10!=0;num--) cnt++;

        num=num/10;
        printf("%d\n", cnt);
        arr[i]=cnt;
    }
    for(int i=0; i<N; i++)
        printf("%d\t", arr[i]);
    
    return 0;
}