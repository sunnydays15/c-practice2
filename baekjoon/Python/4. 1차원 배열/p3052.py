s1 = set([])

for i in range(10):
    s1.add(int(input())%42)

cnt =0
for i in s1:
    cnt+=1

print(cnt)