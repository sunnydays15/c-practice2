a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

if(a==b and b==c):
    print(10000+a*1000)
elif(a==b and b!=c):
    print(1000+a*100) 
elif(b==c and c!=a):
    print(1000+b*100)
elif(c==a and a!=b):
    print(1000+c*100)
else:
    e = [a,b,c]
    e.sort()
    print(100*e.pop())
