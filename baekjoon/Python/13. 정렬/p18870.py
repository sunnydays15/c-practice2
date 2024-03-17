import sys
input = sys.stdin.readline
N = int(input())

numbers = list(map(int, input().split()))

numset = set(numbers[:]) # 겹치는 거 없애기
numset = list(numset)
numset.sort()
# element의 index 저장하는 리스트 생성
index = []

for num in range(len(numset)):
    index.append((numset[num], num))

for i in range(N):
    for idx in index:
        if numbers[i] == idx[0]:
            numbers[i] = idx[1]

for idx in numbers:
    print(idx, end=' ')