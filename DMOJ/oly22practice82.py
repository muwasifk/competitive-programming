import sys
n = list(input()) 
m = list(input())

k = int(ord(m[0]) - ord(n[0]))%26

for i in range(1, len(n)):
    if int(ord(m[i]) - ord(n[i]))%26 != k: 
        print('No') 
        sys.exit() 

print('Yes')