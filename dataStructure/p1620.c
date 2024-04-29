#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int num;
    char name[21];
}Pokemon;

int main(){

    int N, M;
    scanf("%d %d", &N, &M);
    

    // 도감 등록
    Pokemon arr[N];
    for(int i = 0; i < N; i++){
        scanf("%s", arr[i].name);
        arr[i].num = i+1;
    }

    // 퀴즈
    char quiz[21];
    for(int i = 0; i < M; i++){
        scanf("%s", quiz);
        if(quiz[0] >= '0' && quiz[0] <= '9')
            printf("%s\n", arr[atoi(quiz)-1].name);
        
        else{
            for(int j = 0; j < N; j++){
                if(!strcmp(arr[j].name,quiz))
                    printf("%d\n", arr[j].num);
            }
        }
    }

    return 0;
}