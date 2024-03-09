# 1-2+1 / 2-2+1+2 / 3-2+1+2+4 / 4-2+1+2+4+8

N = int(input())

sum = 2
for i in range(N):
    square = 2
    sum += (square**i)

print(sum**2)