import sys
input = sys.stdin.readline

# 행 기준 비교
def Row(arr):
    for i in range(10):
        cnt = 0
        std = arr[i][0]
        for color in arr[i]:
            if std == color:
                cnt += 1
        if cnt==10:
            return 1
    else:
        return 0

# 열 기준 비교
def Column(arr):
    for i in range(10):
        cnt = 0
        std = arr[0][i]
        for j in range(10):
            if std == arr[j][i]:
                    cnt += 1
            if cnt==10:
                return 1
    else:
        return 0

# 10x10 2차원 배열 만들기
arr = [[0] for _ in range(10)]
for i in range(10):
    arr[i] = input().split()

print(Row(arr) | Column(arr))