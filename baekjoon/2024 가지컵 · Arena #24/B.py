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
    # 격자 (b) 만들기
    grid_b = [[0]*n for _ in range(n)]
    
    # [x][0]부터 [0][x] 까지 x+1, y+1
    for i in range(n):
        x = i
        y = 0
        while x >= 0:
            grid_b[x][y] = num
            num += 1
            x -= 1
            y += 1
    # [x][1]부터 [1][x] 까지 x+1, y+1 (사실상 x는 고정)
    for i in range(n):
        x = n-1
        y = i+1
        while y < n:
            grid_b[x][y] = num
            num += 1
            x -= 1
            y += 1

    # 격자 (a)와 격자 (b)를 비교
    cmp_list = []        

    for i in range(n):
        for j in range(n):
            if grid_a[i][j]==grid_b[i][j]:
                cmp_list.append(grid_b[i][j])

    for number in cmp_list:
        print(number, end=' ')
    print()
    # print(cmp_list)