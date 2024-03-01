A = int(input())
B = int(input())
B1 = B%10
B10 = B%100-B1
B100 = B-B10-B1
print(A*B1)
print(A*B10//10)
print(A*B100//100)
print(A*B)