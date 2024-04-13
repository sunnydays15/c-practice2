import sys

# 입력
N = int(sys.stdin.readline())
Pi = list(map(int,sys.stdin.readline().split()))
Pi.sort()

sum = 0
for time in Pi:
    sum += time*N
    N -= 1

print(sum)