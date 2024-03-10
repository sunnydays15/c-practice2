N = int(input())

numlist = list(map(int, input().split()))

# 소수 판별 함수 구현
def is_Prime(num):
    if num == 1:
        return 0
    for j in range(2, num):
        if num%j == 0:
            return 0
    else:
        return 1

cnt = 0
for i in numlist:
    cnt += is_Prime(i)

print(cnt)