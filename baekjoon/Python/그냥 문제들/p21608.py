# |r1 - r2| + |c1 - c2| = 1을 만족하는 두 칸이 (r1, c1)과 (r2, c2)를 인접하다고 한다.
N = int(input())

desk = [[-1 for j in range(N+2)] for i in range(N+2)]

for i in range(1, N+1):
    for j in range(1, N+1):
        desk[i][j] = 0

stu = [0]*(N**2)

for i in range(N**2):
    stu[i].append(map(int, input().split()))

print(stu)

# # 좋아하는 사람 찾기
# for i in range(N):
#     cnt = 0
#     for j in range(N):
#         for m in range(1, N+1):
#             for n in range(1, N+1):
#                 if stu[i][j]==desk[m][n]:
#                     cnt += 1
#     # 좋아하는 사람 없음
#     if cnt == 0:
#         Zero = [[0 for j in range(N)] for i in range(N)]

#         for n in range(1, N+1):
#             for m in range(1, N+1):
#                 if desk[m][n] == 0:
#                     if desk[m-1][n] == 0:
#                         Zero[m][n] += 1
#                     if desk[m+1][n] == 0:
#                         Zero[m][n] += 1
#                     if desk[m][n-1] == 0:
#                         Zero[m][n] += 1
#                     if desk[m][n+1] == 0:
#                         Zero[m][n] += 1
#         max = Zero[0][0]
#         maxPos = [0]*(N**2)
#         x = 0
#         for n in range(N):
#             for m in range(N):
#                 x += 1
#                 if max < Zero[m][n]:
#                     max = Zero[m][n]
#                     maxPos[x] = (m,n)
#         tmp = 0
#         for n in range(N):
#             for m in range(N):
#                 if max == Zero[m][n]:
#                     tmp += 1
#         for j in range(N**2):
#             if maxPos[j] != 0:
#                 desk[maxPos[j][0]+1][maxPos[j][1]+1]
#                 break
