M = int(input())
N = int(input())

# 소수 판별 함수 구현
def is_Prime(num):
    if num == 1:
        return False
    for j in range(2, num):
        if num%j == 0:
            return False
    else:
        return True

# 소수 리스트 만들기
primes = []    
sum = 0
for i in range(M,N+1):
    if is_Prime(i):
        primes.append(i)
        sum += i

if len(primes) == 0:
    print(-1)
else:
    print(sum)
    print(primes[0])