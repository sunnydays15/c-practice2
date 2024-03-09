S = input()
arr = []

# -1로 된 26자 배열 만들기
for i in range(26):
    arr.append(-1)

length = len(S)
for i in range(length):
    arr[ord(S[i])-ord('a')] = S.find(S[i])

for i in arr:
    print(i, end=' ')