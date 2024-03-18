import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    n = int(input())

    num = 1
    # 격자 (a) 만들기
    grid_a = [[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            grid_a[i][j] = num
            num += 1

    num = 1
    cmp_list = []   
    # 격자 (b)를 격자 (a)와 바로 비교

    # [x][0]부터 [0][x] 까지 x+1, y+1
    for i in range(n):
        x = i
        y = 0
        while x >= 0:
            if grid_a[x][y] == num:
                cmp_list.append(num)
            num += 1
            x -= 1
            y += 1
    # [x][1]부터 [1][x] 까지 x+1, y+1 (사실상 x는 고정)
    for i in range(n):
        x = n-1
        y = i+1
        while y < n:
            if grid_a[x][y] == num:
                cmp_list.append(num)
            num += 1
            x -= 1
            y += 1

    for number in cmp_list:
        print(number, end=' ')
    print()