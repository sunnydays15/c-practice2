import sys
from collections import deque

Deque = deque([])

N = int(sys.stdin.readline())

for _ in range(N):
    order = sys.stdin.readline().split()

    # push
    if len(order) > 1:
        if order[0] == "push_front":
            Deque.appendleft(order[1])
        else:
            Deque.append(order[1])

    # rest
    else:
        if order[0] == "pop_front":
            try:
                print(Deque.popleft())
            except:
                print(-1)

        elif order[0] == "pop_back":
            try:
                print(Deque.pop())
            except:
                print(-1)
        
        elif order[0] == "size":
            print(len(Deque))
        
        elif order[0] == "empty":
            if Deque:
                print(0)
            else:
                print(1)

        elif order[0] == "front":
            try:
                print(Deque[0])
            except:
                print(-1)
        
        else:
            try:
                print(Deque[-1])
            except:
                print(-1)