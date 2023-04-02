t1 = int(input())
t2 = int(input())
counter = 2
i = False
while i == False:
    oldt2 = t2
    t2 = t1-t2
    t1 = oldt2
    counter += 1
    if t2 > t1:
        i = True

print(counter)