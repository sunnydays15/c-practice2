import sys

T = int(sys.stdin.readline())

for _ in range(T):
    OX_result = sys.stdin.readline().strip('\n')

    sum_score = 0
    score = 0
    for Bool in OX_result:
        if Bool == 'O':
            score += 1
        else:
            score = 0
        
        sum_score += score

    print(sum_score)