A = []
check = []

for i in range(5):
    A.append(-1)
    check.append(-1)    # 다섯 줄의 영단어 길이를 저장하는 리스트 생성 및 공간 확보

# 저장 받기
for i in range(5):
    A[i] = list(input())
    check[i] = len(A[i])

# max 찾기
max = 0
for l in check:
    if max < l:
        max = l

# max보다 길이가 작은 문자열 공간 늘리기
for i in range(5):
    if check[i] < max:
        for j in range(check[i],max):
            A[i].append(-1)

# 읽기(-1나오면 넘기는 방식)
for i in range(max):
    for j in range(5):
        if A[j][i] == -1:
            continue
        else:
            print(A[j][i], end='')