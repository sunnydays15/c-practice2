import sys
from collections import deque

class Queue:
    def __init__(self):
        self.front = 0
        self.rear = 0
        self.queue = deque([])

    def isEmpty(self):
        if self.front == self.rear:
            return 1
        else:
            return 0
    
    def push(self, X):
        self.queue.append(X)
        self.rear += 1

    def Pop(self):
        if not self.isEmpty():
            self.front += 1
            return self.queue.popleft()
        else:
            return -1
        
    def size(self):
        return self.rear - self.front
    
    def Front(self):
        if not self.isEmpty():
            return self.queue[0]
        else:
            return -1
    
    def back(self):
        if not self.isEmpty():
            return self.queue[-1]
        else:
            return -1
        
N = int(sys.stdin.readline())

queue = Queue()

for _ in range(N):
    order = sys.stdin.readline().strip('\n')

    if "push" in order:
        queue.push(int(order[5:]))

    elif order == "pop":
        print(queue.Pop())

    elif order == "size":
        print(queue.size())

    elif order == "empty":
        print(queue.isEmpty())

    elif order == "front":
        print(queue.Front())

    else:
        print(queue.back())