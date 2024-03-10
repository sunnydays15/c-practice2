while True:
    num1, num2 = map(int, input().split())

    # 0, 0 이 나올때까지
    if num1 == 0 and num2 == 0:
        break

    elif num1 < num2 and num2%num1 == 0:
        print("factor")

    elif num1 > num2 and num1%num2 == 0:
        print("multiple")

    else:
        print("neither")