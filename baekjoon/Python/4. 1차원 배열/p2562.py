arr = []

# 입력값 저장
for i in range(9):
    arr.append(int(input()))

# 최댓값 비교
max = arr[0]
for i in range(9):
    if max < arr[i]:
        max = arr[i]
print(max, arr.index(max)+1)