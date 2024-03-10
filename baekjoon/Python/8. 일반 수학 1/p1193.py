# 1,1 / 1,2 2,1 / 3,1 2,2 1,3 / 1,4 2,3 3,2 4,1 / 5,1 4,2
import sys
X = int(sys.stdin.readline())

nume = 1
denom = 1

page = 1
cnt = 1
while cnt < X:
    if page == 1:
        denom += 1
        page += 1
        cnt += 1
        continue
    
    elif page%2 == 0:
        while denom >= 1 and cnt < X:
            if denom == 1:
                page += 1
                nume += 1
                cnt += 1
                break
            nume += 1
            denom -= 1
            cnt += 1
    
    else:
        while nume >= 1 and cnt < X:
            if nume == 1:
                page += 1
                denom += 1
                cnt += 1
                break
            nume -= 1
            denom += 1
            cnt += 1
print(str(nume)+'/'+str(denom))