import sys
input = sys.stdin.readline

N, k = map(int,input().split())

score_list = input().split()

for i in range(N):
    score_list[i] = int(score_list[i])

score_list.sort()
score_list.reverse()

print(score_list[k-1])