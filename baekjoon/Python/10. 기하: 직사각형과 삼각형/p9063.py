import sys

N = int(input())

x_list = []
y_list = []
for i in range(N):
    x, y = map(int, sys.stdin.readline().split())
    x_list.append(x)
    y_list.append(y)

print((max(x_list)-min(x_list))*(max(y_list)-min(y_list)))