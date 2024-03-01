X = int(input())
N = int(input())

sum=0
while N>0:
    N-=1
    a,b=input().split()
    a=int(a)
    b=int(b)
    sum+=a*b
if sum==X:
    print("Yes")
else:
    print("No")