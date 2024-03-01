import sys

T = int(input())

while T>0:
    A,B=sys.stdin.readline().split()
    print(int(A)+int(B))
    T-=1