import sys

initword = input()

potgram = input()

listone = list(initword)
listtwo = list(potgram)

counter = 0
for element in listtwo:
    if element != "*":
        if element in listone:
            listone.remove(element)
            counter += 1
        else:
            print("N")
            sys.exit()
    else:
        counter += 1

print("A")