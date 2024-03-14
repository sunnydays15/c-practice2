import sys

def is_Triangle(arr):
    max = arr[0]
    sum = 0
    for i in arr:
        if max < i:
            max = i
        sum += i
    
    if sum-max > max:
        return 1
    else:
        return 0
    
while True:
    a,b,c = map(int, sys.stdin.readline().split())
    if a==b==c==0:
        break
    angle_list = [a,b,c]

    if is_Triangle(angle_list):
        angle_list = set(angle_list)
        length = len(set(angle_list))

        if length == 1:
            print("Equilateral")
        elif length == 2:
            print("Isosceles")
        else:
            print("Scalene")
    else:
        print("Invalid")