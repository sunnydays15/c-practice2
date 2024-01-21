#include <stdio.h>
int main(){
    int n;
    printf("상수 n 입력: ");
    scanf("%d", &n);

// 곱셈을 하고 다시 1부터 카운트하게 해야함
// n과 비교 후 작으면 k의 값을 늘려서 다시 비교
// 커진 순간 k가 +1 되므로 출력은 k-1로 확인
    int i=1, k=0;
    for(; i<=n; k++){
        int tmp=k;
        for(int j=1; tmp>0; tmp--){
            j=j*2;
            i=j;
        }
        continue;
    }
    printf("공식을 만족하는 k의 최댓값은 %d\n", k-2);

    return 0;
}