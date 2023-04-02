numPieces = int(input())
numPeople = int(input())

memoization = {} 

def func(n, k, m):
    if k == 1:
        return 1
    
    if n == k:
        return 1 
    
    if (n,k,m) in memoization:
        return memoization[(n,k,m)]

    c = 0
    for x in range(m, int(n/k) + 1):
        c += func(n-x, k-1, x) 
    
    memoization[(n,k,m)] = c

    return c

print(func(numPieces, numPeople, 1))