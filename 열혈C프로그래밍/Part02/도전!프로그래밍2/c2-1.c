#include <stdio.h>
int main(){
    int num[10];
    printf("총 10개의 숫자 입력\n");

    for(int idx=0; idx<10; idx++){
        printf("입력 : ");
        scanf("%d", &num[idx]);
    }

    int odd[10], even[10];
    int ODDcnt=0, EVENcnt=0;

    for(int idx=0; idx<10; idx++){
        if(num[idx]%2!=0){
            odd[idx]=num[idx];
            even[idx]=-1;
            ODDcnt++;
        }
        else{
            even[idx]=num[idx];
            odd[idx]=-1;
            EVENcnt++;
        }
    }
    int cnt1=0;

    printf("홀수 출력 : ");
    for(int idx=0; idx<10; idx++){

        if(odd[idx]!=-1){

            printf("%d", odd[idx]);
            cnt1++;
            if(cnt1<ODDcnt)
                printf(", ");
            else
                printf("\n");
        }
        else
            continue;
    }
    int cnt2=0;

    printf("짝수 출력 : ");
    for(int idx=0; idx<10; idx++){

        if(even[idx]!=-1){

            printf("%d", even[idx]);
            cnt2++;
            if(cnt2<EVENcnt)
                printf(", ");
            else
                printf("\n");
        }
        else
            continue;
    }
    return 0;
}