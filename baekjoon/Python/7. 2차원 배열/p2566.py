A = []

# 9행 공간 확보
for i in range(9):
    A.append(0)

# 9열 입력 받기
for i in range(9):
    A[i]=list(map(int,input().split()))

# 최댓값 찾기
max = 0
N = 0
M = 0
for i in range(9):
    for j in range(9):
        if max < A[i][j]:
            max = A[i][j]
            N = i
            M = j

# 출력
print(max)
print(N+1, M+1)