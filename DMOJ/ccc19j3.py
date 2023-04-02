num_inputs = int(input())

lines = []

for i in range(0, num_inputs):
    lines.append(input())

for element in lines:
    res_str = ''
    nList = list(element)
    aList = []
    bList = []
    currentchar = ''
    
    counter = 0
    for j in range(0, len(nList)):
        if nList[j] == currentchar:
            counter += 1
        else:
            if j == 0:
                currentchar = nList[j]
                counter = 1
            elif j != 0:
                aList.append(currentchar)
                currentchar = nList[j]
                bList.append(counter)
                counter = 1
    aList.append(currentchar)
    currentchar = nList[j]
    bList.append(counter)
    counter = 1
    for j in range(0, len(aList)):
        res_str += f'{bList[j]} {aList[j]} '
    
    print(res_str)