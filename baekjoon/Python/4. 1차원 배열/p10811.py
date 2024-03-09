N, M = map(int,input().split())

list1 = list(range(1,N+1))

for i in range(M):
    i, j = map(int,input().split())
    
    while i<j:
        list1[i-1], list1[j-1] = list1[j-1], list1[i-1]
        i+=1
        j-=1

for i in list1:
    print(i,end=' ')