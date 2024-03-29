import sys
input = sys.stdin.readline

class queue:
    def __init__(self):
        self.queue = []
        self.front = -1
        self.rear = -1

    def isEmpty(self):
        if self.front == self.rear : return 1
        else : return 0

    def push(self, num):
        self.rear += 1
        self.queue.append(num)


    def Pop(self):
        if not self.isEmpty():
            self.front += 1
            return self.queue[self.front]
        else:
            return -1

    def size(self):
        return self.rear - self.front

    def Front(self):
        if not self.isEmpty():
            return self.queue[self.front+1]
        else:
            return -1

    def back(self):
        if not self.isEmpty():
            return self.queue[-1]
        else:
            return -1

N = int(input())
Q1 = queue()

for i in range(N):
    order = input()

    if order[:4] == "push":
        Q1.push(order[5:-1])

    elif order[:3] == "pop":
        print(Q1.Pop())

    elif order[:4] == "size":
        print(Q1.size())

    elif order[:5] == "empty":
        print(Q1.isEmpty())

    elif order[:5] == "front":
        print(Q1.Front())

    else:
        print(Q1.back())