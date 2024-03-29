from collections import deque

N, K = map(int, input().split())

circle = deque([str(i+1) for i in range(N)])

josepus = []

for _ in range(N):
    circle.rotate(-K+1)
    josepus.append(circle.popleft())

result = ", ".join(josepus)
print('<', end='')
print(result, end='')
print('>')