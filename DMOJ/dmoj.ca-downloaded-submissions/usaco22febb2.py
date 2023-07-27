n = int(input())
a, b = list(map(int, input().split())), list(map(int, input().split()))

y = []
for i in range(n):
    y.append(0)

c = []
for i in range(0, len(b)+1):
    c.append(0)

for i in range(0, len(b)):
    c[b[i]] = i+1

for i in range(0, len(a)):
    if (y[i] == 0):
        for j in range(i, len(b)):
            if c[a[i]] > c[a[j]]: y[j] = 1


print(sum(y))