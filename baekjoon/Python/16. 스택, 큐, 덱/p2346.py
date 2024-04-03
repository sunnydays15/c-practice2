import sys
from collections import deque

N = int(sys.stdin.readline())

pos_list = list(map(int, sys.stdin.readline().split()))
fuck = []
for i in range(N):
    pos_list[i] *= -1
for i in range(N):
    if pos_list[i] > 0 :
        fuck.append(1)
    else:
        fuck.append(0)

deque_list = deque([i+1 for i in range(N)])
memo = 0

for i in range(N):
    memo = deque_list.popleft()
    print(memo, end=' ')
    memo -= 1
    if pos_list[memo] > 0 : pos_list[memo] -= 1
    else : pos_list[memo] += 1
    deque_list.rotate(pos_list[memo])
    if fuck[memo] : deque_list.rotate(1)