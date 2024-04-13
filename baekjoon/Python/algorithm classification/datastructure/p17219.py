import sys
N, M = map(int, sys.stdin.readline().split())

ps_dict = {}
for _ in range(N):
    book = sys.stdin.readline().split()
    ps_dict[book[0]] = book[1]

for _ in range(M):
    print(ps_dict[sys.stdin.readline().strip('\n')])