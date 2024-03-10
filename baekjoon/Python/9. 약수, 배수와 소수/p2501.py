N, K = map(int, input().split())

# 나머지 리스트 만들기
remainder = []

# 하나씩 나머지가 0인지 확인
for i in range(1, N+1):
    if N%i == 0:
        remainder.append(i)

# K의 범위가 오버될경우
if K > len(remainder):
    print(0)
else:
    print(remainder[K-1])