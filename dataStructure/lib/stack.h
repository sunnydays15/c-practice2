struct stack{
    int capacity;
    int top;
};

void Push(int * top, char * S);
char Pop(int * top, char * S);
void ShowAll(int top, char * arr);