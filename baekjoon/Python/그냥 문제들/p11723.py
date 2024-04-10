import sys

M = int(sys.stdin.readline())
S = set()

for _ in range(M):
    order = sys.stdin.readline().split()

    if len(order) == 1:
        if order[0] == "all":
            S = set([i for i in range(1,21)])
        else:
            S = set()

    else:
        fuct, parameter = order[0], order[1]
        parameter = int(order[1])

        if fuct == "add":
            S.add(parameter)
        elif fuct == "remove":
            S.discard(parameter)
        elif fuct == "check":
            if parameter in S:
                print('1')
            else:
                print('0')
        elif fuct == "toggle":
            if parameter in S:
                S.discard(parameter)
            else:
                S.add(parameter)