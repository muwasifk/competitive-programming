x = int(input())
m = int(input())

k = 0
for i in range(1,m+1):
    if (x * i - 1)//m == (x*i - 1)/m:
        print(i)
        k = 1
        break
if k == 0:
    print("No such integer exists.")