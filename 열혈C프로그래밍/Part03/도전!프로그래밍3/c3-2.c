#include <stdio.h>
int main(){
    int n;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &n);
    printf("\n");

    int arr[n][n];
    int num=1;
    int i=0, j=0;
    int a=1, b=0;

    for(i=0; i<n-a; i++){
        if(i+1==n-a){
            arr[i][i]=num++;
            arr[i][i+1]=num++;
            arr[i+1][i+1]=num++;
            arr[i+1][i]=num;
            break;
        }
        for(j=b; j<n-a; j++){
            arr[i][j]=num;
            num++;
        }
        for(j=b; j<n-a; j++){
            arr[j][n-1-i]=num;
            num++;
        }
        for(j=b; j<n-a; j++){
            arr[n-1-i][n-1-j]=num;
            num++;
        }
        for(j=b; j<n-a; j++){
            arr[n-1-j][i]=num;
            num++;
        }
        a++;
        b++;
    }

    if(i==n-a) arr[i][b]=num;

    for(int I=0; I<n; I++){
        for(int J=0; J<n; J++){
            printf("%-5d", arr[I][J]);
        }
        printf("\n\n");
    }
    return 0;
}
    // for(i=1; i<5-2; i++){
    //     for(j=1; j<5-2; j++){
    //         arr[i][j]=num;
    //         num++;
    //     }
    //     for(j=1; j<5-2; j++){
    //         arr[j][5-1-i]=num;
    //         num++;
    //     }
    //     for(j=1; j<5-2; j++){
    //         arr[5-1-i][5-1-j]=num;
    //         num++;
    //     }
    //     for(j=1; j<5-2; j++){
    //         arr[5-1-j][i]=num;
    //         num++;
    //     }
    //     a++;
    //     b++;
    // }

/*
o o o       o o o o         o o o o o           o o o o o o
o o o       o o o o         o o o o o           o o o o o o
o o o       o o o o         o o o o o           o o o o o o
            o o o o         o o o o o           o o o o o o
                            o o o o o           o o o o o o
                                                o o o o o o
2(3-1)      3(4-1)          4(5-1)              5(6-1)
2->1        3->1            4->2->1             5->3->1

6(7-1): 6->4->2->1, 두개씩 빼는 규칙(마지막엔 1로 끝나야함)

※ (0,0) ~ (0,n-2) 까지 새긴후, 90˚씩 돌려서 4회 진행 후 다음 페이즈로

① arr[i][j]=num;
② arr[j][n-1-i]=num;
③ arr[n-1-i][n-1-j]=num;
④ arr[n-1-j][i]=num;

*/