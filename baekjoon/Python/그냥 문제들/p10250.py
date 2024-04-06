import sys

T = int(sys.stdin.readline())

for _ in range(T):
    H, W, N = map(int, sys.stdin.readline().split())

    # 몇호실인 것부터 정하기(H)
    X = 1   # ?호
    next = H
    while N > next:
        X += 1
        next += H

    # 층수 정하기
    Y = N - (next - H)
    
    print(Y, end='')
    if X < 10:
        print(0, end='')
    print(X)
