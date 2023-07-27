from sys import stdin
import sys
input = stdin.readline

n = int(input()); a = input().split(); b = input().split(); 

p = {} 

for i in range (n):
    x, y = a[i], b[i]

    if x in p.keys():
        if p[x] != y:
            print("bad")
            sys.exit() 
    if y in p.keys():
        if p[y] != x:
            print("bad")
            sys.exit()  
    if x == y: 
        print("bad")
        sys.exit()  

    if x not in p.keys(): 
        p[x] = y; p[y] = x; 
    if y not in p.keys():
        p[x] = y; p[y] = x; 

print("good")