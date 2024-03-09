# 1 - 2초 , 2 - 3초, 9 - 10초 , 0 - 11초
def sec(alp):
    if alp>='A' and alp<='C':
        return 3
    elif alp>='D' and alp<='F':
        return 4
    elif alp>='G' and alp<='I':
        return 5
    elif alp>='J' and alp<='L':
        return 6
    elif alp>='M' and alp<='O':
        return 7
    elif alp>='P' and alp<='S':
        return 8
    elif alp>='T' and alp<='V':
        return 9
    elif alp>='W' and alp<='Z':
        return 10

S = input()
sum = 0
for i in range(len(S)):
    sum += sec(S[i])

print(sum)