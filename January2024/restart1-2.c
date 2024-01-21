#include <stdio.h>
int main(){
    printf("총 10개의 숫자 입력\n");

    int num[10];
    for(int i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &num[i]);
    }

    int cntOdd=0, cntEven=0;

    for(int i=0; i<10; i++){
        if(num[i]%2==1) cntOdd++;
        else cntEven++;
    }

    int odd[cntOdd], cnt1=0;
    int even[cntEven], cnt2=0;

    for(int i=0; i<10; i++){
        if(num[i]%2==1){
            odd[cnt1]=num[i];
            cnt1++;
        }
        else{
            even[cnt2]=num[i];
            cnt2++;
        }
    }
    printf("홀수 출력:");
    for(int i=0; i<cntOdd; i++){
        printf(" %d", odd[i]);
        if(i!=cntOdd-1) printf(",");
    }
    printf("\n");
    printf("짝수 출력:");
    for(int i=0; i<cntEven; i++){
        printf(" %d", even[i]);
        if(i!=cntEven-1) printf(",");
    }
    printf("\n");

    return 0;
}