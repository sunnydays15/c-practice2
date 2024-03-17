import sys

N = int(sys.stdin.readline())

pos = []
for _ in range(N):
    pos.append(tuple(map(int,sys.stdin.readline().split())))

pos.sort()
for xy in pos:
    print(xy[0],xy[1])