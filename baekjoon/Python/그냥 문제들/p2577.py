import sys

A = int(sys.stdin.readline())
B = int(sys.stdin.readline())
C = int(sys.stdin.readline())

result = str(A*B*C)

num_list = [0 for i in range(10)]

for num in result:
    num_list[int(num)] += 1

for num in num_list:
    print(num)