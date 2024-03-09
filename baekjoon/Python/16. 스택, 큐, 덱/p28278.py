import sys

N = int(sys.stdin.readline())
stack = list()
top = -1

for _ in range(N):
    order = sys.stdin.readline()
    if order[0] == '1':
        item = int(order[2:])
        stack.append(item)
        top += 1
    elif order[0] == '2':
        if top == -1:
            print('-1')
        else:
            print(stack.pop())
            top -= 1
    elif order[0] == '3':
        print(top+1)
    elif order[0] == '4':
        if top == -1:
            print(1)
        else:
            print(0)
    elif order[0] == '5':
        if top == -1:
            print(-1)
        else:
            print(stack[top])