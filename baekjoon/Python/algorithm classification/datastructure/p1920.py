import sys

N = int(sys.stdin.readline())
A = set(sys.stdin.readline().split())
M = int(sys.stdin.readline())
cmp_list = sys.stdin.readline().split()
cmp_set = set(cmp_list)

intersection = A & cmp_set

for num in cmp_list:
    if num in A:
        print('1')
    else:
        print('0')