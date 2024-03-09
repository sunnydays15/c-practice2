# 가로,세로 크기가 각각 100인 흰색 도화지
# 가로,세로 크기가 각각 10인 검은색 색종이
# 색종이 수는 100 이하, 도화지 밖으로 나가지 않음

# 일단 입력받은 좌측하단 꼭짓점을 기점으로 그 정사각형이 가진 모든 꼭짓점을 저장함 
# (ex) p1->p2, p1->p3, p1->p4, p2->p3, p2->p4, p3->p4 로 비교해서 겹치는 꼭짓점을 추려 겹치는 꼭짓점으로 넓이를 유추함
# 나온 넓이들을 각각 더해서 전체 검은색 색종이 크기에서 제외 후 출력

# 주어진 리스트로 넓이 구하는 함수
def area(A):
    length = len(A)
    maxX = A[0][0]
    minX = A[0][0]
    maxY = A[0][1]
    minY = A[0][1]
    for i in range(length):
        if maxX < A[i][0]:
            maxX = A[i][0]
        if minX > A[i][0]:
            minX = A[i][0]
        if maxY < A[i][1]:
            maxY = A[i][1]
        if minY > A[i][1]:
            minY = A[i][1]
    return (maxX-minX)*(maxY-minY)

N = int(input())    # 검은색 색종이의 수

P = []
# 검은색 색종이 리스트 생성
for i in range(N):
    P.append(set([]))

# 각 색종이의 전체 면 꼭짓점을 각각 리스트의 집합에 저장
for i in range(N):
    x , y = map(int,input().split())
    for a in range(11):
        for b in range(11):
            P[i].add((x+a,y+b))

# 각 색종이를 하나씩 비교(겹치는 넓이 구하기)
overlap = 0
for i in range(N):
    for j in range(i+1,N):
        if P[i] - P[j] == P[i]:
            continue
        else:
            overlap += area(list(P[i] & P[j]))

print(100*N-overlap)