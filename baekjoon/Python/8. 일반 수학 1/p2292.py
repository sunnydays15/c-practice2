# 1 - 1 / 2 - 6 / 3 - 12 / 4 - 18 / 5 - 24
# a = [1,   2,3,4,5,6,7,   8,9,10,11,12,13,14,15,16,17,18,19]

N = int(input())
H = N - 1
section = 1
while(1):
    H -= section*6

    if H > 0:
        section += 1
    else:
        break
    
if N == 1:
    print(1)
else:
    print(section+1)