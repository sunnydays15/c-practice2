#include <stdio.h>
#include "queue.h"

int isEmpty(int front, int rear){
    return front == rear;
}

int isFull(int front, int rear, int capacity){
    return front == (rear+1)%capacity;
}

void enqueue(int * rear, int capacity, int * arr){
    int item;
    scanf("%d", &item);
    *rear = (*rear+1)%capacity;
    arr[*rear] = item;
}

int dequeue(int * front, int capacity, int * arr){
    *front = (*front+1)%capacity;
    return arr[*front];
}

int size(int front, int rear, int capacity){
    return (rear-front+capacity)%capacity;
}

void display(int front, int rear, int capacity, int * arr){
    printf("\n[ ");
    while(!isEmpty(front, rear)){
        front = (front+1)%capacity;
        printf("%d ", arr[front]);
    }
    printf("]\n");
}