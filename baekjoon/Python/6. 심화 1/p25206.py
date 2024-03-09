subGraph = {'A+':4.5, 'A0':4.0, 'B+':3.5, 'B0':3.0, 'C+':2.5, 'C0':2.0, 'D+':1.5, 'D0':1.0, 'F':0.0}

score = []
grade = []
cntP = 0
for num in range(20):
    Sub, Score, Grade = input().split()
    if Grade == 'P':
        cntP += 1
        continue
    else:
        score.append(float(Score))
        grade.append(subGraph[Grade])

sumS = 0
sum = 0
for num in range(20-cntP):
    sumS += score[num]*grade[num]
    sum += score[num]

print(sumS/sum)