a = 0
b = True

n = int(input())
for i in range(n):
    x = int(input())
    y = int(input())

    if 5*x - 3*y <= 40:
        b = False 
    else:
        a += 1 
    
s = str(a) 
if b:
    s += "+"

print(s)