i = input; a = i().split(); b = i().split(); c = i().split(); t = 0;
for i in range(0, 3): 
    if int(b[i]) == int(a[i-1]): 
        if (int(c[i]) > 0): t += int(c[i])
print(t)