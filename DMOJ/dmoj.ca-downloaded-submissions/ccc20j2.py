P = int(input())
N = int(input())
R = int(input())
a = N
counter_1 = N
counter_2 = 0
counter = 0

i = False
while i == False:
    counter_1 += R * N
    counter_2 = R * N
    
    if a == R and a == 1:
        counter = P - 1
        i = True
    
    N = counter_2 

    if counter_1 > P or R == 0:
        i = True 
    
    counter += 1
    
print(counter)