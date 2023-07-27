n = int(input())

x = input() 

if len(x) < n: 
    s = 'moo'*len(x)
else:
    s = 'moo' * n
    
if x in s: 
    print("yes")
else:
    print("no")