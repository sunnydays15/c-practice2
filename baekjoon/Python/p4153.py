import sys

while True:
    
    edge1, edge2, edge3 = map(int, sys.stdin.readline().split())

    if(edge1 == 0 and edge2 == 0 and edge3 == 0):
        break

    i = 1
    max = edge1
    if(edge2 > max): 
        max = edge2
        i = 2
    if(edge3 > max): 
        max = edge3
        i = 3

    if i == 1:
        if edge1*edge1 == edge2*edge2 + edge3*edge3:
            print("right")
        else:
            print("wrong")
    elif i == 2:
        if edge2*edge2 == edge1*edge1 + edge3*edge3:
            print("right")
        else:
            print("wrong")
    elif i == 3:
        if edge3*edge3 == edge1*edge1 + edge2*edge2:
            print("right")
        else:
            print("wrong")