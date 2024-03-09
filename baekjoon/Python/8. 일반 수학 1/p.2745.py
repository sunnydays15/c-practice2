N, B = input().split()
B = int(B)

strlen = len(N)

sum = 0
for i in range(strlen):
    if N[i]>='A' and N[i]<='Z':
        d = ord(N[i])-ord('A')+10
    else:
        d = int(N[i])
    sum += d*(B**(strlen-1))
    strlen -= 1

print(sum)