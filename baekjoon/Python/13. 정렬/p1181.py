import sys

N = int(sys.stdin.readline())

voca_list = set(input() for _ in range(N))  # 겹치는 것 제거

voca_list = list(voca_list) # 리스트로

voca_list.sort(key=lambda voca : (len(voca), voca))

for voca in voca_list:
    print(voca)