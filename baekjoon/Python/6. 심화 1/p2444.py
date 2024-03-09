# 공백      별
#  4        1
#  3        3
#  2        5
#  1        7
#  0        9
N = int(input())

#위쪽 삼각형
space = N-1
star = 1
for i in range(N):
    for j in range(space):
        print(' ',end='')
    for k in range(star):
        print('*', end='')
    print()
    space -= 1
    star += 2

# 아래 삼각형
space = 0
star = 2*N-1
for i in range(N):
    space += 1
    star -= 2
    for j in range(space):
        print(' ',end='')
    for k in range(star):
        print('*', end='')
    print()