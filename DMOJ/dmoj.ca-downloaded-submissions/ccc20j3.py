num_points = int(input())

user_input = []

xs = []
ys = []

for i in range(0,num_points):
    coordinate = input()
    user_input.append(coordinate)

for i in range(0,len(user_input)):
    splitted = user_input[i].split(",")
    xs.append(splitted[0])
    ys.append(splitted[1])

print(f'{int(min(xs)) - 1},{int(min(ys)) - 1}')
print(f'{int(max(xs)) + 1},{int(max(ys)) + 1}')