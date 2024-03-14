a = int(input())
b = int(input())
c = int(input())

angle_set = set([a,b,c])
cnt = len(angle_set)

if a+b+c != 180:
    print("Error")
elif cnt == 1:
    print("Equilateral")
elif cnt == 2:
    print("Isosceles")
else:
    print("Scalene")