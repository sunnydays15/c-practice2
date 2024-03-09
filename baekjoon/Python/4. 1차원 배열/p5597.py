stu = []
check = list(range(1,31))

# 출석 입력받기
for i in range(28):
    stu.append(int(input()))

# 1번부터 30번 체크
for i in range(30):
    for j in range(28):
        if check[i] == stu[j]:
            check[i]=0
        else:
            pass
for i in check:
    if i != 0:
        print(i)