import sys

N = int(sys.stdin.readline())

string = sys.stdin.readline()

strlen = len(string)

score_list = list()

# 일단 리스트에 넣기
for i in range(strlen):
    if string[i] == 'A':
        try: 
            if string[i+1] == '+':
                score_list.append("A+")
            elif string[i+1] == '0':
                score_list.append("A0")
            elif string[i+1] == '-':
                score_list.append("A-")
            else:
                score_list.append("A0")
        except:
            score_list.append("A0")
    elif string[i] == 'B':
        try: 
            if string[i+1] == '+':
                score_list.append("B+")
            elif string[i+1] == '0':
                score_list.append("B0")
            elif string[i+1] == '-':
                score_list.append("B-")
            else:
                score_list.append("B0")
        except:
            score_list.append("B0")
    if string[i] == 'C':
        try: 
            if string[i+1] == '+':
                score_list.append("C+")
            elif string[i+1] == '0':
                score_list.append("C0")
            elif string[i+1] == '-':
                score_list.append("C-")
            else:
                score_list.append("C0")
        except:
            score_list.append("C0")
    else:
        pass

# 평어 변환
for i in range(N):
    # A+ -> E /// C+, C0, C- -> B
    if(score_list[i] == "A+"):
        print("E", end='')

    elif(score_list[i] == "C+" or score_list[i] == "C0" or score_list[i] == "C-"):
        print("B", end='')

    elif(score_list[i] == "A0"):
        if i == 0: #첫학기
            print("E", end='')
        #이전학기
        elif(score_list[i-1] == "A-" or score_list[i-1] == "B+" or score_list[i-1] == "B0" 
            or score_list[i-1] == "B-" or score_list[i-1] == "C+" or score_list[i-1] == "C0" or score_list[i-1] == "C-"):
            print("E", end='')
        elif(score_list[i-1] == "A+" or score_list[i-1] == "A0"):
            print("P", end='')


    elif(score_list[i] == "A-" or score_list[i] == "B+"):
        if i == 0: #첫학기
            print("P", end='')
        #이전학기
        elif(score_list[i-1] == "B0" or score_list[i-1] == "B-" or score_list[i-1] == "C+" or score_list[i-1] == "C0" or score_list[i-1] == "C-"):
            print("P", end='')
        elif(score_list[i-1] == "A+" or score_list[i-1] == "A0" or score_list[i-1] == "A-" or score_list[i-1] == "B+"):
            print("D", end='')

    
    else:
        if i == 0: #첫학기
            print("D", end='')
        #이전학기
        elif(score_list[i-1] == "C+" or score_list[i-1] == "C0" or score_list[i-1] == "C-"):
            print("D", end='')
        elif(score_list[i-1] == "A+" or score_list[i-1] == "A0" or score_list[i-1] == "A-" or score_list[i-1] == "B+" or score_list[i-1] == "B0" or score_list[i-1] == "B-"):
            print("B", end='')
