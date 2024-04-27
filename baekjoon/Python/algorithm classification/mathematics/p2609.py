import sys
num1, num2 = map(int, sys.stdin.readline().split())

# 최대공약수
gcd = 1
max = num1 if(num1 < num2) else num2

i = 1
while i <= max :
    if num1%i == 0 and num2%i == 0 :
        gcd = i
    i += 1
print(gcd)

# 최소공배수 -> 최대공약수를 이용
lcm = (num1//gcd)*num2

print(lcm)