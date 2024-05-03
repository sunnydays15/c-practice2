import sys

def Factorial(num):
    if num == 1:
        return 1
    if num == 0:
        return 1
    
    return num*Factorial(num-1)

N, K = map(int, sys.stdin.readline().split())

print(Factorial(N)//(Factorial(N-K)*Factorial(K)))