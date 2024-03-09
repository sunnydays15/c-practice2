#include <stdio.h>
#include "lib/stack.c"

// 백준 10828
int main(){
    struct stack A;
    printf("스택의 용량 입력: ");
    scanf("%d", &A.capacity);
    char array[A.capacity];
    A.top = -1;

    int num;
    while(1){
        printf("\n1.push 2.pop 3.check_size 4.show_All 5.exit\n");
        scanf("%d", &num);

        switch(num){
            case 1:
            if (A.top == A.capacity-1) printf("overflow!\n");
            else Push(&A.top, &array[A.top+1]);
            break;

            case 2:
            if (A.top ==-1) printf("underflow!\n");
            else printf("%c\n", Pop(&A.top, &array[A.top]));
            break;

            case 3:
            printf("현재 스택의 크기는 %d\n", A.top+1);
            break;

            case 4:
            ShowAll(A.top, array);
            break;

            case 5:
            printf("프로그램 종료\n");
            break;
        }
        if (num == 5) break;
    }
    return 0;
}