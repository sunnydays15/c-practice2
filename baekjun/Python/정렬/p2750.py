N = int(input())
e = []

while N>0:
    N-=1
    a = int(input())
    e.append(a)
e.sort()
for i in e:
    print(i)