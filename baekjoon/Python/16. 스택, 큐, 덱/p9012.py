# '('나올때는 입력받고 ')'나올때는 출력
# ')'나왔는데 출력될게 없으면 "NO"
# 입력이 끝났는데 스택에 남아있어도 "NO"
import sys
input = sys.stdin.readline

class check_VPS:
    def __init__(self):
        self.top = -1
        self.arr = []

    def isEmpty(self):
        return self.top == -1

    def push(self, item):
        self.top += 1
        self.arr.append(item)

    def pop(self):
        if not self.isEmpty():
            self.arr.pop()
            self.top -= 1
            return 1
        else:
            return 0
        
T = int(input())

stack = check_VPS()
for _ in range(T):
    check = 1
    PSdata = input()
    for i in range(len(PSdata)-1):
        if PSdata[i] == '(':
            stack.push(1)
        else:
            if not stack.pop():
                check = 0
                print("NO")
                break
    if check:
        if stack.top != -1:
            print("NO")
        else:
            print("YES")
    stack.arr = []
    stack.top = -1