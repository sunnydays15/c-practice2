N = input()

numbers = list(N)

numbers.sort(reverse=True)

for num in numbers:
    print(num, end='')