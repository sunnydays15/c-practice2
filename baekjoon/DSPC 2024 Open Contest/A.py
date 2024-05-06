import sys
import math

a,b,c = map(int, sys.stdin.readline().split())

if a == 0:
    a = c**2 - b
    print(a)
elif b == 0:
    b = c**2 - a
    print(b)
else:
    c = math.sqrt(a+b)
    print(int(c))