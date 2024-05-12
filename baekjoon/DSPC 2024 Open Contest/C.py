# 기회비용 = 자신이 제외한 물건의 값 중 가장 큰 값 - 자신의 가격 
# 순수익 = 물건 구매 이익 - 기회비용 - 가격

# 순수익 = 물건 구매 이익 - 가장 큰 값

import sys

# 입력
N = int(sys.stdin.readline())
profit_list = list(map(int, sys.stdin.readline().split()))
price_list = list(map(int, sys.stdin.readline().split()))

Max = max(profit_list)
Max_idx = 0
for profit in profit_list:
    if profit == Max:
        break
    Max_idx += 1

Second_Max = 0
Second_Max_idx = 0
for profit in profit_list:
    if Second_Max < profit and profit != Max:
        Second_Max = profit
        break
    Second_Max_idx += 1

# 기회비용
opportunity_cost = list()
for i in range(N):
    if(profit_list[i] == Max):
        opportunity_cost.append(Second_Max-price_list[i])
    else:
        opportunity_cost.append(Max-price_list[i])

# 순수익
for i in range(N):
    print(profit_list[i] - opportunity_cost[i] - price_list[i], end= ' ')