import sys

n = int(input()) 

l = input().split()
lx = []

for i in l:
    lx.append(int(i)) 

s1 = 0
s2 = sum(lx)
asas = 0
for j in range(0, n):
    s1 += lx[j] 
    s2 -= lx[j]

    if s1 == s2: 
        print(f"{j+1}")
        asas = 1
        break 

if asas == 0:
    print("Andrew is sad.")