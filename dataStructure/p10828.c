#include <stdio.h>
#include <stdlib.h>
// int * arr = (int *)malloc(sizeof(int)*3)
// int * arr = (int *)realloc(arr, sizeof(int)*5)

int main(){
    int N;
    scanf("%d ", &N);
    int top = -1;
    int * arr = (int *)malloc(sizeof(int)*(top+1));

    // N번 명령 반복
    for(int i = 0; i<N; i++){
        // 명령 받기
        char order[20];
        fgets(order, sizeof(order), stdin);
    
        int sum = 0;
        if(order[0] =='p'){
            // push
            if(order[1] == 'u'){
                int idx = 5;
                int len = 0;
                for(int i = 5; order[i]!='\n'; i++) len++;

                // push 뒤에 숫자 저장
                for(; len>0; len--){
                    int tmp = len - 1;
                    int C = (int)(order[idx]-'0');
                    for(; tmp>0; tmp--)
                        C *= 10;
                    
                    sum += C;
                    idx++;
                }
                top++;
                arr = (int *)realloc(arr, sizeof(int)*(top+1));
                arr[top] = sum;
                // printf("%d\n", arr[top]);
            }
            //pop
            else if(order[1] == 'o'){
                if(top == -1) printf("-1\n");
                else{
                    printf("%d\n", arr[top]);
                    arr[top] = 0;
                    top--;
                    arr = (int *)realloc(arr, sizeof(int)*(top+1));
                }
            }
        }
        //size
        else if(order[0] == 's'){
            // int strlen=0;
            // for(int i=0; arr[i]!=0; i++)
            //     strlen++;
            printf("%d\n", top+1);
        }
        //empty
        else if(order[0] == 'e'){
            if(top==-1) 
                printf("%c\n", '1');
            else 
                printf("%c\n", '0');
        }
        //top
        else if(order[0] == 't'){
            if(top==-1)
                printf("%d\n", -1);
            else
                printf("%d\n", arr[top]);
        }
    }
    free(arr);
    return 0;
}