N, M = map(int,input().split())
bask = []

# 바구니 0 초기화
for a in range(N):
    bask.append(0)


# i번부터 j번 바구니까지 k번 번호 공을 넣는 알고리즘
for a in range(M):
    i,j,k = map(int, input().split())

    while i<=j:
        bask[i-1] = k
        i += 1

# 출력 형태 맞추기
for a in bask:
    print(a, end=' ')