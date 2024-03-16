import sys
input = sys.stdin.readline

K = int(input())

class stack:
    def __init__(self):
        self.arr = []
        self.top = -1

    def push(self, item):
        self.top += 1
        self.arr.append(item)

    def pop(self):
        self.top -= 1
        self.arr.pop()

A = stack()
for _ in range(K):
    item = int(input())

    if item == 0:
        A.pop()
    else:
        A.push(item)

print(sum(A.arr))