import math
import copy

l = input().split() 

n = int(l[0])
s = int(l[1])

points =[]
groups = []


def groupNum(a):
    for i in groups:
        if a in i: 
            return groups.index(i)


for i in range(0, n//s):
    x = input().split() 
    for j in x:
        groups.append([])
        groups[i].append(int(j))

for i in range(n//s):
    points.append([])

for i in range(0, n//s):
    for j in range(0, n+1):
        points[i].append([j, 0])


for i in range(0, (s-1)*n//2):
    x = input().split() 
    a, b = int(x[0]), int(x[1])
    w = x[2] 

    if w == "W":
        points[groupNum(a)][a][1] += 3
    elif w == "L":
        points[groupNum(b)][b][1] += 3
    else:
        points[groupNum(a)][a][1] += 1
        points[groupNum(b)][a][1] += 1

k = int(input())
rs = ""
for i in range(0, n//s):
    opop = points[i]
    asdf = copy.copy(opop) 
    opop.sort()
    asdf.sort()
    for j in asdf:
        if j[0] == 0:
            opop.remove(j)
        elif j[0] not in groups[i]:
            opop.remove(j) 
    rs = rs + str(opop[k-1][0]) + " "

print(rs.strip())