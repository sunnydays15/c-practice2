import sys
input = sys.stdin.readline

# 스택의 고려요소 3가지
# 1) 다 끝나고도 남아있으면 [,( 수가 더 많았다는 의미 -> False
# 2) ],) 가 나왔는데 꺼낼게 없으면 -> False
# 3) [], () 짝이 맞아야 함
def check_bracket(string):
    stack = []
    top = -1
    for i in string:

        if i == '[' or i == '(':
            stack.append(i)
            top += 1

        elif i == ']':
            if top == -1 : return "no"
            end = stack.pop()
            top -= 1
            if end != '[': return "no"

        elif i ==')':
            if top == -1 : return "no"
            end = stack.pop()
            top -= 1
            if end != '(': return "no"
    
    if top == -1 : return "yes"
    else : return "no"

while True:
    string = input()
    if string == '.\n' : break
    print(check_bracket(string))