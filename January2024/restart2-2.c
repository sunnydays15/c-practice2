#include <stdio.h>
int main(){
    int num;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);
// 16을 입력하면 16, 27을 입력하면 16+8+2+1로 인식하는 프로그램으로 작성하기
// 27 입력 -> 16과 32사이 인 것으로 찾음 -> 27에서 16을 뺌 -> 11이 남음 -> 11이 8과 16사이 인 것을 찾음
// -> 11에서 8을 뺌 -> 3이 남음 -> 3이 2와 4사이 인 것을 찾음 -> 3에서 2를 뺌 -> 1이 남음
    int sum=0;
    while(num>1){
        int i=1, k=0;
        int cnt=1;
        for(;i<num;k++){
            int tmp=k;
            int j=1;
            for(;tmp>0;tmp--){
                j=j*2;
                i=j;
            }
        }
        if(num-i/2>1){
            num=num-i/2;
        }
        else{
            break;
        }
        for(;k>0;k--){
            cnt=cnt*10;
        }
        sum=sum+cnt;
    }
    if(num==1)
        sum=sum+1;
    printf("%d\n", sum);

    return 0;
}