//      O         입력을 받습니다 . 다만 홀수만 받을 수 있습니다. 짝수를 받을 시 다시 입력해야합니다.
//     OOO
//    OOOOO
//   OOOOOOO
//  OOOOOOOOO
//   OOOOOOO
//    OOOOO
//     OOO
//      O


// 우선 홀수만 입력받는 프로그램 작성
#include <stdio.h>
int odd(int num){
    for(;num%2==1;)
        return num;
    
    return 0;
}

int main()
{
    int num;
    printf("홀수를 입력하세요. : ");
    scanf("%d", &num);
    while(odd(num)==0){
        printf("%d은(는) 짝수입니다. 홀수를 입력하세요. : ", num);
        scanf("%d", &num);
        continue;
    }

    int blank1 = num/2, blank2 = num/2;   // num은 칸수, blank를 페이즈1과 페이즈2로 나타내는 변수 선언
    int plus1 = num/2+1, plus2=num-1;   // plus는 blank한줄과 O개수의 합

    for(; blank1>=0; blank1--){
        int i = blank1, j = blank1;
        int cntO=plus1-blank1;

        while(i>0){
            printf(" ");
            i--;
        }
        while(cntO>0){
            printf("O");
            cntO--;
        }
        while(j>0){
            printf(" ");
            j--;
        }
        printf("\n");
        plus1++;
    }

    for(int i=1; i<=blank2; i++){
        int cntO=plus2-i;

        for(int m=i; m>0; m--)
            printf(" ");            

        while(cntO>0){
            printf("O");
            cntO--;
        }
        for(int n=i; n>0; n--)
            printf(" ");   
        
        printf("\n");
        plus2--;
    }
    return 0;
}

//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

// num은 칸수, blank와 O의 개수를 나타내는 변수 선언

// 만약 num = 9이면,
// 4 + 1 + 4 + \n
// 3 + 3 + 3 + \n
// 2 + 5 + 2 + \n
// 1 + 7 + 1 + \n
// 0 + 9 + 0 + \n
// 1 + 7 + 1 + \n
// 2 + 5 + 2 + \n
// 3 + 3 + 3 + \n
// 4 + 1 + 4 + \n
// 일단 무조건 반복문
// 1번과 3번은 똑같다

// 줄어들다가 커진다를 보여주는 프로그램 작성
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("숫자 입력 : ");
//     scanf("%d", &num);

//     int j = num;

//     for(; num >=0; num--){
//         printf("%d \n", num);
//     }
//     for(int i=1; i<=j; i++){
//         printf("%d \n", i);
//     }
    
// }
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ


// 커지다가 줄어든다(+2씩 커짐)를 보여주는 프로그램 작성
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("숫자 입력 : ");
//     scanf("%d", &num);

//     int j = num - 2;

//     for(int i=1; i<=j; i+=2){
//         printf("%d \n", i);
//     }
//     for(; num >0; num-=2){
//         printf("%d \n", num);
//     }
    
// }
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ