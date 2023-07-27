from math import sqrt
 
n = int(input())

print(int(1/sqrt(5) * ( ((1 + sqrt(5))/2)**n - ((1-sqrt(5))/2)**n ) )%1000000007)