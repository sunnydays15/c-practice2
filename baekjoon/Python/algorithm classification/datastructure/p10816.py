import sys
from collections import deque

N = int(sys.stdin.readline())
card_list = list(sys.stdin.readline().split())
card_set = set(card_list)
card_dict = dict()

M = int(sys.stdin.readline())
int_list = list(sys.stdin.readline().split())

for num in card_set:
    card_dict[num] = 0
    
for num in card_list:
    card_dict[num] += 1

for num in int_list:
    try:
        print(card_dict[num], end=' ')
    except:
        print('0', end=' ')
print()