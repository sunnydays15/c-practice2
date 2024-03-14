x, y, w, h = map(int, input().split())

# 가운데 점 기준 사분면 판단 함수
def Compare(x, y, w, h):
    if x<=w/2 and y<=h/2:
        return x if x<y else y
    elif x>=w/2 and y<=h/2:
        return (w-x) if (w-x)<y else y
    elif x<=w/2 and y>=h/2:
        return x if x<h-y else h-y
    else:
        return w-x if w-x < h-y else h-y
    
print(Compare(x,y,w,h))