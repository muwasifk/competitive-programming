speed_limit = int(input())
actual_speed = int(input())

if actual_speed <= speed_limit:
    print('Congratulations, you are within the speed limit!')
elif actual_speed > speed_limit:
    difference = actual_speed - speed_limit
    if difference >= 1 and difference <= 20:
        print(f'You are speeding and your fine is $100.')
    if difference >= 21 and difference <= 30:
        print(f'You are speeding and your fine is $270.')
    if difference >= 31:
        print(f'You are speeding and your fine is $500.')