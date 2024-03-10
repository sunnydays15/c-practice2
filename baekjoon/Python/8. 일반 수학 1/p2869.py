import math

def snail_days(A, B, V):
    return math.ceil((V - B) / (A - B))

A, B, V = map(int, input().split())

print(snail_days(A, B, V))