x = []

s = input() 
c = 0

for i in range(0, len(s)):
    if s[i] not in x :
        if len(x) < 2:
            x.append(s[i])
        else:
            c += 1
    
print(c)