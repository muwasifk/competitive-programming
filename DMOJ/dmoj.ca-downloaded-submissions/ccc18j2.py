num_spaces = int(input())

day_one = input()
day_two = input()

day_one_splitted = list(day_one)
day_two_splitted = list(day_two)

counter = 0

for i in range(0, num_spaces):
    if day_one_splitted[i] == 'C' and day_two_splitted[i] == 'C':
        counter += 1

print(counter)