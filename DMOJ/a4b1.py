l = []

x = int(input())

for i in range(x):
    y = int(input())
    l.append(y)
l.sort()

for i in l: 
    print(i)