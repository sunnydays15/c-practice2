import sys

N = int(sys.stdin.readline())

members_list = []
# 번호표 주기
for i in range(N):
    age, name = sys.stdin.readline().split()
    members_list.append((age, name, i))

members_list.sort(key=lambda member : (int(member[0]),member[2]))

for member in members_list:
    print(member[0],member[1])