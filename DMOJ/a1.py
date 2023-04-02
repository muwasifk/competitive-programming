n = int(input())

for j in range (0, n):

    inp = input().split() 
    x = int(inp[0])
    y = inp[1]

    s = "" 
    for i in range(0, len(y)):
        if i != x - 1:
            s += y[i] 

    print(str(j+1) + " " + s)