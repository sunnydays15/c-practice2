N = int(input())
i = 1

while(i<=N):
    s = N-i
    while(s>0):
        print(' ',end='')
        s-=1

    j = 1
    while(j<=i):
        print('*',end='')
        j += 1
    print()
    i += 1