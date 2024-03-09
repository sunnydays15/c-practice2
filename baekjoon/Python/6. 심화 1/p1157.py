S = input().upper()
l1 = []

for i in range(len(S)):
    l1.append(S[i])

s1 = set(l1)

d1 = {}

for i in s1:
    d1[i] = l1.count(i)

v1 = d1.values()
max = 0
check = 1
for i in v1:
    if max < i:
        max = i
        check = 1
        continue
    elif max == i:
        check = 0

if check != 0:
    for i in s1:
        if(d1[i]==max):
            print(i)
else:
    print('?')