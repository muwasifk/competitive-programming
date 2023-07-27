import re 

def wordcount(n):
    nn = list(n) 
    c = 0
    for i in nn: 
        if i.isalpha():
            c += 1 
    
    return c 

for i in range(5): 
    counter = 0
    line = input() 
    l = re.split(r" |'", line)
    for j in l:
        if wordcount(j) >= 4: 
            counter += 1
    print(counter)