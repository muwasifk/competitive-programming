import math
n = int(input())

a = [] 

for i in range(n):
    y = int(input())
    a.append(y) 

print(min(sum(a) - max(a), math.floor(sum(a)/2)))