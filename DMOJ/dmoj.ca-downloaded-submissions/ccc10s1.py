numtotal = int(input())

computers = []

for i in range(0, numtotal):
    inp = input()
    computers.append(inp)

formularesults = []

comps = []

for element in computers:
    element.split(" ")
    comp = element[0]
    R = int(element[1])
    S = int(element[2])
    D = int(element[3])
    comps.append(comp)
    formularesults.append(2*R + 3*S + D)

bestcomputerresult = max(formularesults)
bestcomputer = comps[formularesults.index(bestcomputerresult)]

formularesults.remove(bestcomputerresult)
secbestcomputerresult = max(formularesults)
secbestcomputer = comps[formularesults.index(secbestcomputerresult)]

print(bestcomputer)
print(secbestcomputer)