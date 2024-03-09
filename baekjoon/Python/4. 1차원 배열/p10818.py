N = int(input())

a = list(map(int,input().split()))
max = min = a[0]
for i in range(N):
    if max < a[i]:
        max = a[i]
    if min > a[i]:
        min = a[i]
print(min,end=' ')
print(max)