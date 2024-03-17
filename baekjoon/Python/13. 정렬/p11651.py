import sys

N = int(sys.stdin.readline())

pos = []
for _ in range(N):
    x,y = map(int,sys.stdin.readline().split())
    x,y = y,x
    pos.append((x,y))

pos.sort()
for xy in pos:
    print(xy[1],xy[0])