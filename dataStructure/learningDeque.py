# element : array[] capacity rear front
# method : isEmpty isFUll size addfront addrear deletefront deleterear

class Queue:
    def __init__(self, capacity):
        self.capacity = capacity
        self.array = [None]*capacity
        self.front = 0
        self.rear = 0

    def isEmpty(self):
        return self.front == self.rear
    
    def isFull(self):
        return self.front == (self.rear+1)%self.capacity
    
    def enqueue(self, item):
        if not self.isFull():
            self.rear = (self.rear + 1) % self.capacity
            self.array[self.rear] = item
        else: pass
    # def enqueue(self, item):
    #      self.rear = (self.rear + 1) % self.capacity
    #      self.array[self.rear] = item
    #      if self.isEmpty():
    #         self.front = (self.front + 1) % self.capacity

    def dequeue(self):
        if not self.isEmpty():
            self.front = (self.front + 1) % self.capacity
            return self.array[self.front]
        else: pass

    def peek(self):
        if not self.isEmpty():
            return self.array[(self.front+1)%self.capacity]
        else: pass

    def size(self):
        return (self.rear - self.front + self.capacity)%self.capacity

    def display(self,msg):
        print(msg, end=' = [')
        for i in range(self.front+1, (self.front+1)+self.size()):
            print(self.array[i], end=' ')
        print(']')


class Deque(Queue):
    def __init__(self, capacity):
        super().__init__(capacity)

    def addRear(self, item): self.enqueue(item)
    def deleteFront(self): return self.dequeue()
    def getFront(self): return self.peek()

    def addFront(self, item):
        if not self.isFUll():
            self.array[self.front] = item
            self.front = (self.front-1 + self.capacity) % self.capacity
        else : pass

    def getrear(self):
        if not self.isEmpty():
            return self.array[(self.rear)]
        else: pass

    def deleteRear(self):
        if not self.isEmpty():
            item = self.array[self.rear]
            self.rear = (self.rear-1 + self.capacity)%self.capacity
            return item 
        else: pass