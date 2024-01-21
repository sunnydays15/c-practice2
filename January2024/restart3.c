#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    int gcd=1;

    int tmp;
    if(n1>n2){
        tmp=n1;
        n1=n2;
        n2=tmp;
    }

    for(int i=1; i<=n1; i++){
        if(n1%i==0&&n2%i==0)
            gcd=i;
    }
    printf("GCD of two numbers: %d\n", gcd);
    return 0;
}