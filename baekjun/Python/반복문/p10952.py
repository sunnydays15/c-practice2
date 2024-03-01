import sys

while True:
    A,B=sys.stdin.readline().split()
    if(A == '0' and B == '0'): break
    print(int(A)+int(B))
