import sys

def Check(number):
    numlen = len(number)
    bifurcation = 0
    for i in range(numlen-1):
        if number[i]<number[i+1]:
            if bifurcation == 1:
                return 0
        elif number[i]>number[i+1]:
            if bifurcation == 0:
                bifurcation = 1
        else:   # 같은게 있을때
            return 0
    if bifurcation == 1:
        return 1
    else:
        return 0

t = int(sys.stdin.readline())

for _ in range(t):
    a,b = map(int, sys.stdin.readline().split())

    sum = 0
    if b >= 120:
        for i in range(120, b+1):
            sum += Check(str(i))
    print(sum)