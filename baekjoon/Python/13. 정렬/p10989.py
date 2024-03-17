import sys


N = int(sys.stdin.readline())

numbers = [int(sys.stdin.readline()) for _ in range(N)]

numbers.sort()

for num in numbers:
    sys.stdout.write(str(num)+'\n')