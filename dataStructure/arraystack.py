def printReverse(msg, len):
    if len > 0:
        print(msg[len-1])
        printReverse(msg, len-1)

printReverse("자료구조", len("자료구조"))