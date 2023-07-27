n = int(input()); cows = input();

prev = '.'; ret = 0; 

for i in range (0, n, 2):
    if cows[i] != cows[i+1]: 
        if cows[i] != prev: 
            ret += 1; prev = cows[i];

if prev == 'H': ret -= 1 

print(ret)