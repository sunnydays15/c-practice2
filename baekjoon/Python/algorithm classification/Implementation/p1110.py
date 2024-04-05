import sys

N = int(sys.stdin.readline())

count = 1
tmp = N%10 + N//10
M = tmp%10 + (N%10)*10
while True:
    if M == N:
        break
    count += 1

    tmp = M%10 + M//10
    M = tmp%10 + (M%10)*10

print(count)