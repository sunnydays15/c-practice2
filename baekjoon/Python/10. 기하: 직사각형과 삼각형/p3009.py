import sys
input = sys.stdin.readline

xs = []
ys = []
for i in range(3):
    x,y = map(int, input().split())
    xs.append(x)
    ys.append(y)

for i in range(3):
    if xs.count(xs[i]) == 1:
        print(xs[i], end=' ')
for i in range(3):
    if ys.count(ys[i]) == 1:
        print(ys[i])