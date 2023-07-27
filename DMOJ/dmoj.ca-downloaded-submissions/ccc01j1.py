height = int(input())

long_row = 2*height

tie = ""

for i in range(1, int(long_row/2 + 0.5) + 1):
    if i%2 == 1:
        for m in range(0, i):
            tie += '*'

        for m in range(1, height - i + 1):
            tie += " "

        for m in range(1, height - i + 1):
            tie += " "

        for m in range(0, i):
            tie += '*'

        print(tie)

        tie = ""
    else:
        continue

for i in reversed(range(int(long_row/2 + 0.5))):
    if i%2 == 1:
        for m in range(0, i):
            tie += '*'

        for m in range(1, height - i + 1):
            tie += " "

        for m in range(1, height - i + 1):
            tie += " "

        for m in range(0, i):
            tie += '*'

        print(tie)

        tie = ""

    else:
        continue