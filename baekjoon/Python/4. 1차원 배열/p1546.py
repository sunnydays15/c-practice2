N = int(input())

l1 = list(map(int,input().split()))
l2 = []

max = l1[0]
for i in l1:
    if max < i:
        max = i

for i in l1:
    l2.append(i/max*100)

sum = 0
for i in l2:
    sum += i
print(sum/N)