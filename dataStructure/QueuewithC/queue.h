typedef struct queue{
    int front;
    int rear;
    int capacity;
}Queue;

int isEmpty(int front, int rear);
int isFull(int front, int rear, int capacity);
void enqueue(int * rear, int capacity, int * arr);
int dequeue(int * front, int capacity, int * arr);
int size(int front, int rear, int capacity);
void display(int front, int rear, int capacity, int * arr);