import sys
from collections import deque

def roundup(num):
    if (num - int(num)) >= 0.5:
        return int(num)+1
    else:
        return int(num)

# input
n = int(sys.stdin.readline())
difficulty_list = []
for _ in range(n):
    difficulty_list.append(int(sys.stdin.readline()))
# 정렬
difficulty_list.sort()
difficulty_list = deque(difficulty_list)

# 제외되는 사람 수
exc = roundup(n*0.15)

while exc > 0 :
    difficulty_list.pop()
    difficulty_list.popleft()
    exc -= 1

if n == 0:
    print(0)
else:
    print(roundup(sum(difficulty_list)/len(difficulty_list)))