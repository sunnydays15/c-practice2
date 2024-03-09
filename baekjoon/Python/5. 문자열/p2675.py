T = int(input())
for i in range(T):
    R, S = input().split()
    R = int(R)
    length = len(S)
    for j in range(length):
        for k in range(R):
            print(S[j], end='')
    print()