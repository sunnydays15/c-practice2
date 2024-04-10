import sys

N, M = map(int, sys.stdin.readline().split())
dogam = {}

for _ in range(N):
    dogam.append(sys.stdin.readline().strip('\n'))

for _ in range(M):
    order = sys.stdin.readline().strip('\n')

    if order in dogam:
        print(dogam.index(order)+1)
    else:
        print(dogam[int(order)-1])