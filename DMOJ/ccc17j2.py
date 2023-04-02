orig_num = int(input())
k = int(input())

addend = orig_num
sumvar = orig_num

for i in range(0, k):
    addend = int(str(addend) + '0')
    sumvar += addend

print(sumvar)