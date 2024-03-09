N = int(input())
arr = []

num = input()

for i in range(N):
    arr.append(int(num[i]))

sum = 0
for i in arr:
    sum += i

print(sum)