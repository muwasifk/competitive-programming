input = input()
input = input.split(" ")
day = int(input[0])
num_days = int(input[1])
begin_char = 4 * (day - 1) + 2
day_distance = 7 - day + 1


print('Sun Mon Tue Wed Thr Fri Sat')
space = ""
for i in range(0, begin_char):
    space += " "
space = space + "1"
if day == 7:
    print(space)
    space = ""

for i in range(2, num_days+1):
    if i == day_distance:
        space += f'   {i}'
        print(space)
        space = ""

    elif i == day_distance + 1:
        space += f'  {i}'
    elif i%7 == (day_distance + 1)%7:
        if len(str(i)) == 1:
            space += f'  {i}'
        else:
            space += f' {i}'
    elif (i - day_distance)%7 == 0:
        if len(str(i)) == 1:
            space += f'   {i}'
        else:
            space += f'  {i}'
        print(space)
        space = ""
    elif len(str(i)) == 2:
        space += f'  {i}'
    else:
        space += f'   {i}'
if space != '':
    print(space)