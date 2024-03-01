import sys

T = int(input())
i=1

while T>0:
    A,B=sys.stdin.readline().split()
    print(f"Case #{i}: {int(A)+int(B)}")
    T-=1
    i+=1