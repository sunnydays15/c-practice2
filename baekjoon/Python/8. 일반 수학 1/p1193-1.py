# 1,1 / 1,2 2,1 / 3,1 2,2 1,3 / 1,4 2,3 3,2 4,1 / 5,1 4,2 3,3 2,4 1,5 / 
import sys

# X값 입력
X = int(sys.stdin.readline())

# X가 어느 페이지에 있는지 탐색
page = 1
sum = 0
while True:
    sum += page
    if sum < X:
        page += 1
    else:
        sum -= page
        break

# page가 짝수일때
if page%2 == 0:
    nume = 1        # 분자
    denom = page    # 분모

    # 해당 페이지 처음부터 X까지
    for i in range(sum+1, X):
        nume += 1
        denom -= 1

# page가 홀수일때
if page%2 == 1:
    nume = page    # 분자
    denom = 1

    for i in range(sum+1, X):
        nume -= 1
        denom += 1

print(str(nume)+'/'+str(denom))