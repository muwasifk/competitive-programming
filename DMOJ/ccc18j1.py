first_digit = input()
second_digit = input()
third_digit = input()
fourth_digit = input()

if first_digit == 8 or first_digit == 9:
    if fourth_digit == 8 or fourth_digit == 9:
        if second_digit == third_digit:
            print('ignore')
        else:
            print('answer')
    else:
        print('answer')
else:
    print('answer')