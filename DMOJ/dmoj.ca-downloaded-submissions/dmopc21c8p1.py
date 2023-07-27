ix = input().split(' ') 
n, m = int(ix[0]), int(ix[1])

a = list(map(int, input().split(' ')))

a.sort() 

b = [a[0]]

a.remove(a[0])
while len(b) != n:
    flag = False 
    for i in a: 
        if i + b[-1] >= m: 
            b.append(i) 
             
            flag = True 
            break 
    if flag == False:
        break 

if flag == False: print(-1) 
else: 
    s = ""
    for i in b: 
        s += str(i)
        s += " " 
    print(s)