#include <stdio.h>

int Max(int n1, int n2, int n3){
    if(n1 > n2){
        if(n1 > n3) return n1;
        else return n3;
    }
    else{
        if(n2 < n3) return n3;
        else return n2;
    }
}

int Min(int n1, int n2, int n3){
    if(n1 > n2){
        if(n2 > n3) return n3;
        else return n2;
    }
    else{
        if(n1 < n3) return n1;
        else return n3;
    }
}

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("max : %d, min : %d\n", Max(n1,n2,n3), Min(n1,n2,n3));
    return 0;
}