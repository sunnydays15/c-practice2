import sys

n = int(sys.stdin.readline())

enter_list = set()

for _ in range(n):
    record = sys.stdin.readline().split()

    if record[1] == 'enter':
        enter_list.add(record[0])
    else:
        enter_list.remove(record[0])

enter_list = list(enter_list)
enter_list.sort(reverse=True)

for person in enter_list:
    print(person)