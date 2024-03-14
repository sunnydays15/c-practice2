a, b, c = map(int, input().split())
angle_list = [a,b,c]

# 세 변의 합
sum = 0
# 가장 큰 변
max = 0
for i in angle_list:
    if max < i:
        max = i
    sum += i

# 삼각형이 가능할때까지 max값 1씩 줄이기
while sum-max<=max:
    max -= 1
    sum -= 1

print(sum)