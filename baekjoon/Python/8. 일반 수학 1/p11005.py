N, B = map(int, input().split())

# 문자열 길이 찾기
length = 0
while True:
    if N/(B**length) >= 1:
        length += 1
    else: break

# 리스트 초기화
s = [0]*length
s[0] = 1
e = list(range(length))
e.reverse()

sum = 0
end = 0
for i in range(length):
    while not end:
        if N/(sum + s[i]*(B**e[i])) > 1:
            s[i] += 1
        elif N/(sum + s[i]*(B**e[i])) == 1:
            end = 1
            sum += s[i]*(B**e[i])
            break
        else:
            s[i] -= 1
            sum += s[i]*(B**e[i])
            break
for i in range(length):
    if s[i]>=10 and s[i]<=35:
        s[i] = chr(s[i]-10+ord('A'))
    else:
        s[i] = str(s[i])

for i in range(length):
    print(s[i], end='')