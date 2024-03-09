chess = [1, 1, 2, 2, 2, 8]
finder = list(map(int,input().split()))
cons = []

for i in range(6):
    cons.append(chess[i]-finder[i])

for i in cons:
    print(i, end=' ')