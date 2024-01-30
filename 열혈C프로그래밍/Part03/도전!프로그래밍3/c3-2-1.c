#include <stdio.h>
int main(){
    int n;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &n);
    printf("\n");

    int arr[n][n];
    int num=1, a=0;
    int k=n;

    for(int i=0; i<n; i++){
        for(int j=a; j<a+n; j++){
            arr[i][j]=num+(n-1)*0;

            arr[j][n-1-i]=num+(n-1)*1;

            arr[n-1-i][n-1-j]=num+(n-1)*2;

            arr[n-1-j][i]=num+(n-1)*3;

            num++;
        }
        a++;
        n=n-2;
        num=num+(n-1)*3;
    }
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*

0,0     0,9     9,9     9,0
0,2     2,9     9,7     7,0


*/