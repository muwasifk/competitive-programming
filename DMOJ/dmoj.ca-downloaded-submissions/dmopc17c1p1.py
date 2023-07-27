import sys
input = sys.stdin.readline

rc = input().split(' ') 
r, c = int(rc[0]), int(rc[1]) 

isrow, iscol = [0]*1001, [0]*1001

for i in range(0, r): 
    inp = input() 
    for j in range(0, c): 
        if inp[j] == 'X':
            isrow[i] = 1; iscol[j] = 1; 

q = int(input()) 

for i in range(q):
    inp = input().split(' ') 
    x, y = int(inp[0]), int(inp[1])
    if isrow[y-1] == 1 or iscol[x-1] == 1:
        print('Y')
    else:
        print('N')