# 쿼터(Quarter, $0.25)의 개수, 다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)의 개수
import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    C = int(input())

    Q = C//25
    C -= Q*25


    D = C//10
    C -= D*10


    N = C//5
    C -= N*5

    P = C
    
    print(Q, D, N, P)