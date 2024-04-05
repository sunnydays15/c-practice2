import sys
T = int(sys.stdin.readline())

for _ in range(T):
    n = int(sys.stdin.readline())
    item_list = {}

    if n == 0:
        print(0)
        continue

    # 입력
    for i in range(n):
        item = sys.stdin.readline().split()
    # 결과적으로 패션 아이템의 종류와 수량을 가진 딕셔너리를 만들어야 함 ex) [2, 1], [1, 1, 1], [3]
        if item[1] in item_list:
            item_list[item[1]] += 1
        else:
            item_list[item[1]] = 1

    item_dict = item_list.values()

    # 세는 방법좀....(feat.조합론)
    count = 1
    for value in item_dict:
        count *= (value+1)
    print(count-1)