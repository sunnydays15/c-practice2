S = input()
l1 = []
l2 = []
l3 = []

for i in range(len(S)):
    l1.append(S[i])

for i in range(len(S)):
    l2.append(l1[i])

l1.reverse()
for i in range(len(S)):
    l3.append(l1[i])

prt = 1
for i in range(len(S)):
    if l2[i] != l3[i]:
        prt = 0
        break
    else:
        continue
print(prt)