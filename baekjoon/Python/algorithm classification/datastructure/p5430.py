import sys
from collections import deque

T = int(sys.stdin.readline())

for _ in range(T):
    p = sys.stdin.readline()
    n = int(sys.stdin.readline())

    # [1,2,3,4]에서 숫자만 뽑아서 저장하는방법
    arr = sys.stdin.readline().strip('[]\n')
    if arr:
        arr = deque(arr.split(','))
    else:
        arr = deque(arr)
    
    exc = 0
    REVERSE = 0
    length = len(p)-1
    for i in range(length):
        if p[i] == 'R':
            REVERSE += 1
        else:
            if arr:
                if REVERSE%2 == 0:
                    arr.popleft()
                else:
                    arr.pop()
            else:
                print("error")
                exc = 1
                break

    if exc != 1:
        print('[', end='')
        if REVERSE%2 == 1:
            arr.reverse()
        result = ','.join(arr)
        print(result, end='')
        print(']')