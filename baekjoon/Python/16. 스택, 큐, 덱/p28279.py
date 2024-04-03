import sys
from collections import deque

N = int(sys.stdin.readline())

d = deque([])

for i in range(N):
    num = sys.stdin.readline().split()

    if num[0] == '3':
        if d:
            print(d.popleft())
        else:
            print('-1')
    elif num[0] == '4':
        if d:
            print(d.pop())
        else:
            print('-1')
    elif num[0] == '5':
        print(len(d))
    elif num[0] == '6':
        if d:
            print('0')
        else:
            print('1')
    elif num[0] == '7':
        if d:
            print(d[0])
        else:
            print('-1')
    elif num[0] == '8':
        if d:
            print(d[-1])
        else:
            print('-1')
    elif num[0] == '1':
        d.appendleft(num[1])
    else:
        d.append(num[1])