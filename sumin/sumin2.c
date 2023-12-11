// 몇개의 열을 받을건지 입력받습니다.
// 만약 5라고 입력 받으면
//      O > i:4 j:1
//     OO > i:3 j:2
//    OOO > i:2 j:3
//   OOOO > i:1 j:4
//  OOOOO > i:0 j:5
// 이렇게 만들어주시면 됩니다.


#include <stdio.h>

int main()
{
    int num;
    printf("몇 열? ");
    scanf("%d", &num);
    int cnt = 1;

    while(num > 0){


        for(int i = num-1; i>0; i--){
            printf(" ");
        }
        for(int j=0; j<cnt; j++){
            printf("O");        
        }
        printf("\n");
        cnt++;
        num--;
    }
    return 0;
}