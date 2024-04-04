import sys
from collections import deque

N = int(sys.stdin.readline())

A = sys.stdin.readline().split()

B = sys.stdin.readline().split()

queuestack = deque()
for i in range(N):
    if A[i] == '0':
        queuestack.appendleft(B[i])

M = int(sys.stdin.readline())

C = sys.stdin.readline().split()

queuestack.extend(C)

for i in range(M):
    print(queuestack.popleft(), end=' ')