weight = eval(input())
height = eval(input())

bmi = weight/(height * height)

if bmi > 25:
    print('Overweight')
elif bmi >= 18.5 and bmi <= 25:
    print('Normal weight')
else:
    print('Underweight')