#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int top = -1 ;
    int * stack = (int *)malloc(sizeof(int)*(top+1));

    int N;
    scanf("%d", &N);

    char order[20];
    for(int i = 0; i < N; i++){
        scanf("%s", order);

        if(!strcmp(order, "push")){
            int num;
            scanf(" %d", &num);

            top++;
            stack = (int *)realloc(stack, sizeof(int)*(top+1));
            stack[top] = num;
        }
        else if(!strcmp(order, "pop")){
            if(top != -1){
                printf("%d\n", stack[top]);

                top--;
                stack = (int *)realloc(stack, sizeof(int)*(top+1));
            }
            else{
                printf("-1\n");
            }
        }
        else if(!strcmp(order, "size")){
            printf("%d\n", top+1);
        }
        else if(!strcmp(order, "empty")){
            if(top != -1)
                printf("0\n");
            else
                printf("1\n");
            
        }
        else{
            if(top != -1)
                printf("%d\n", stack[top]);
            else
                printf("-1\n");
        }
    }
    free(stack);
    return 0;
}