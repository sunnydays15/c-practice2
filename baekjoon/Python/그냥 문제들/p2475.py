import sys

serial_num = sys.stdin.readline().split()

check_num = 0
for num in serial_num:
    check_num += (int(num))**2

print(check_num%10)