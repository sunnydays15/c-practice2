T = int(input())
arr = []

for i in range(T):
    string = input()
    arr.append(string[0]+string[len(string)-1])

for i in arr:
    print(i)