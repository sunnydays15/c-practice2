H, M = input().split()
H = int(H)
M = int(M)
C = int(input())

sum = (H*60+M+C)
hour = sum//60
min = sum%60

if hour>=24:
    hour-=24

print(hour,min)