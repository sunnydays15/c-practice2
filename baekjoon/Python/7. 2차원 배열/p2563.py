n = int(input())    # 검은색 색종이의 수

# 흰색 도화지 만들기
W = []
for _ in range(100):
    W.append([])
for i in range(100):
    for j in range(100):
        W[i].append(0)

# 검은색 색종이 붙이기
for _ in range(n):
    x, y = map(int,input().split())
    for i in range(x-1,x+9):
        for j in range(y-1,y+9):
            W[i][j] = 1

# 1찾아서 색칠된 칸수 체크하기
check = 0
for i in range(100):
    for j in range(100):
        if W[i][j] == 1:
            check += 1
print(check)