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

mx = freq[k[-1]]

l = []

for i in freq.keys():
    if freq[i] == mx:
        l.append(i) 

l.sort() 

print(book[l[0]])