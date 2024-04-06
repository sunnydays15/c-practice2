import sys

while True:
    num = list(sys.stdin.readline().strip('\n'))

    if num == ['0']:
        break
    num1 = num[:]
    num.reverse()
    if num == num1:
        print("yes")
    else:
        print("no")