angle_one = int(input())
angle_two = int(input())
angle_three = int(input())

if angle_one == angle_two and angle_two == angle_three and angle_one == 60:
    print('Equilateral')

angle_sum = angle_one + angle_two + angle_three

if angle_sum == 180:
    if angle_one == angle_two and angle_one != angle_three:
        print('Isosceles')
    elif angle_three == angle_two and angle_one != angle_three:
        print('Isosceles')
    elif angle_one == angle_three and angle_one != angle_two:
        print('Isosceles')
    elif angle_one != angle_two and angle_two != angle_three:
        print('Scalene')
else:
    print("Error")