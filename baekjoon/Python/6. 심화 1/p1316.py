# 만약에 a가 뒤에도 있는 걸 발견했는데 그 사이에 a가 아닌 게 있으면 거르는 걸로
num = int(input())

def Group(S, length):
    for i in range(length-1):
        if S[i] != S[i+1]:
            for j in range(i+1,length):
                if S[i] == S[j]:
                    return 0
    return 1

cnt = 0
for i in range(num):
    S = input()
    length = len(S)
    cnt += Group(S, length)

print(cnt)