#include <stdio.h>
#include "queue.c"

int main(){
    Queue q;
    q.front = 0, q.rear = 0;
    printf("큐의 용량 입력: ");
    scanf("%d", &q.capacity);

    int array[q.capacity];

    int num;
    while(1){
        printf("\n1.enqueue 2.dequeue 3.check_size 4.display 5.exit\n");
        scanf("%d", &num);

        switch(num){
            case 1:
            if(isFull(q.front, q.rear, q.capacity)) printf("overflow!\n");
            else{
                enqueue(&q.rear, q.capacity, array);
            }
            break;

            case 2:
            if(isEmpty(q.front, q.rear)) printf("underflow!\n");
            else printf("%d\n", dequeue(&q.front, q.capacity, array));
            break;

            case 3:
            printf("현재 큐의 크기는 %d\n", size(q.front, q.rear, q.capacity));
            break;

            case 4:
            display(q.front, q.rear, q.capacity, array);
            break;

            case 5:
            printf("프로그램 종료\n");
            break;
        }
        if (num == 5) break;
    }
    return 0;
}