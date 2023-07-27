numround = int(input())

a_counter = 0
d_counter = 0
for i in range(0, numround):
    points = input()
    points_list = points.split(" ")
    a = int(points_list[0])
    d = int(points_list[1])
    
    if a < d: 
        a_counter += d
    elif a > d:
        d_counter += a

print(100 - a_counter)
print(100 - d_counter)