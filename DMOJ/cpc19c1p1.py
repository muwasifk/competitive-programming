n = int(input())

arr = [] 

for i in range (1, n+1):
    arr.append(i)

s = ""
x = True    
while arr != []: 
    if x:
        s += str(arr[0])
        s += " "
        del arr[0]
        x = False
    else:
        s += str(arr[len(arr) - 1])
        s += " "
        del arr[len(arr) - 1]
        x = True 

print(s)