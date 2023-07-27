from sys import stdin
import sys
input = stdin.readline

n = int(input())

book = {} 

for i in range(n): 
    info = input().split() 
    book[int(info[1])] = info[0] 

d = int(input())

freq = {}

for i in range(d):
    num = int(input())
    if num in freq.keys(): freq[num] += 1
    else: freq[num] = 1 

sorted = dict(sorted(freq.items(), key=lambda item: item[1]))
k = list(sorted.keys()) 

 
indx = len(k) - 1
mx = book[k[indx]]

while mx == book[k[indx]]:
    indx -= 1 


print(book[k[indx + 1]])