import math

pictures = 1
while pictures != 0:
    pictures = int(input())

    dimen_one = int(math.sqrt(pictures))

    if math.sqrt(pictures) == dimen_one:
        dimen_two = dimen_one
    else:
        dimen_two = dimen_one + 2
    if pictures != 0:
        print(f'Minimum perimeter is {dimen_one + dimen_two + dimen_one + dimen_two} with dimensions {dimen_one} x {dimen_two}')