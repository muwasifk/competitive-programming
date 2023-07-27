arr = ["001", "002", "003", "004", "005", "006", "007", "008", "009"]

s = input() 

c = 0 
for i in arr: 
    if i in s: 
      c += 1
      
print(c)