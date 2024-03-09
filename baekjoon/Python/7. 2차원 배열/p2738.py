N , M = map(int, input().split())

A = []
B = []

# 공간 확보
for i in range(N):
    A.append(0)
    B.append(0)

# N개 줄 M개 원소 넣기
for i in range(N):
    A[i] = list(map(int,input().split()))
for i in range(N):
    B[i] = list(map(int,input().split()))

for i in range(N):
    for j in range(M):
        print(A[i][j]+B[i][j], end=' ')
    print()