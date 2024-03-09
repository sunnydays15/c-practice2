N, M = map(int,input().split())
arr = []

# arr 배열 초기화
for a in range(1,N+1):
    arr.append(a)

# i번 바구니와 j번 바구니 교환
for a in range(M):
    i, j = map(int,input().split())
    arr[i-1], arr[j-1] = arr[j-1], arr[i-1]

# 출력 형태 맞추기
for a in arr:
    print(a, end=' ')