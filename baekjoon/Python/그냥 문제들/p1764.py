import sys
N, M = map(int, sys.stdin.readline().split())

no_listening = set([])
no_seeing = set([])

for _ in range(N):
    no_listening.add(sys.stdin.readline().strip('\n'))
for _ in range(M):
    no_seeing.add(sys.stdin.readline().strip('\n'))

no_list = list(no_listening & no_seeing)
no_list.sort()

print(len(no_list))
for name in no_list:
    print(name)