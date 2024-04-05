import sys
from collections import deque

# 간식 받을 수 있는가? yes 바로 라인으로 들어가기

N = int(sys.stdin.readline())

waiting_list = map(int,sys.stdin.readline().split())
waiting_list = deque(waiting_list)

def checking_space(line, space, num):
    try:
        if space[-1] == line:
            space.pop()
            line += 1
            return checking_space(line, space, num)

        else:
            space.append(num)
            return line
    except:
        space.append(num)
        return line

space = []
# 현재 들어갈 수 있는 번호
line = 1
while waiting_list:
    num = waiting_list.popleft()

    # 바로 간식 받는 라인으로
    # print(num)
    if num == line:
        line += 1

    # 바로 안됐을 경우 공간 확인
    else:
        line = checking_space(line, space, num)

if space == sorted(space, reverse=True):
    print("Nice")
else:
    print("Sad")