import sys
input = sys.stdin.readline
N = int(input())

numbers = list(map(int, input().split()))

numset = sorted(set(numbers)) # 겹치는 거 없애기

idx_dict = {num: idx for idx, num in enumerate(numset)}

for num in numbers:
    print(idx_dict[num], end=' ')