import sys
from collections import deque

N = int(sys.stdin.readline())

card_list = deque([i+1 for i in range(N)])

for _ in range(N-1):
    card_list.popleft()
    card_list.rotate(-1)

print(card_list[0])