// 1번째 껍데기 : 0,0 -> 0,n-1 -> n-1,n-1 -> n-1,0 -> 1,0
// 2번째 껍데기 : 1,1 -> 1,n-2 -> n-2,n-2 -> n-2,1 -> 2,1
// 3번째 껍데기 : ....
//      .
//      .
//      .
// k번째 껍데기 : k-1,k-1 -> k-1,n-k -> n-k,n-k -> n-k,k-1 -> k,k-1

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("\n");

    int arr[n][n];
    int num = 1;

    //껍데기의 수
    int sum = ceil((double)n/2);
    int shell = 1;

    while(shell <= sum){
        if(shell == sum && n%2 == 1){
            arr[shell-1][shell-1] = num;
            break;
        }

        // 1파트
        for(int j = shell-1; j < n-shell; j++){
            arr[shell-1][j] = num;
            num++;
        }
        // 2파트
        for(int i = shell-1; i < n-shell; i++){
            arr[i][n-shell] = num;
            num++;
        }
        // 3파트
        for(int j = n-shell; j > shell-1; j--){
            arr[n-shell][j] = num;
            num++;
        }
        // 4파트
        for(int i = n-shell; i > shell-1; i--){
            arr[i][shell-1] = num;
            num++;
        }
        // 다음 껍데기로
        shell++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%-5d", arr[i][j]);
        }
        printf("\n\n");
    }
}