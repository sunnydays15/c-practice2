while True:
    # n 입력
    n = int(input())

    if n == -1:
        break
    # 나머지 리스트 만들기
    remainder = []
    sum = 0
    # 하나씩 나머지가 0인지 확인
    for i in range(1, n):
        if n%i == 0:
            remainder.append(str(i))
            sum += i
    
    if sum == n:
        print(str(n) + ' =' + ' ' + ' + '.join(remainder))

    else:
        print(f"{n} is NOT perfect.")