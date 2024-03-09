n1, n2 = input().split()

num1 = n1[2] + n1[1] + n1[0]
num2 = n2[2] + n2[1] + n2[0]

num1 = int(num1)
num2 = int(num2)

print(num1 if num1>num2 else num2)