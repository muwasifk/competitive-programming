burger = int(input())
side = int(input())
drink = int(input())
dessert = int(input())

if burger == 1:
    burger_calories = 461
elif burger == 2:
    burger_calories = 431
elif burger == 3:
    burger_calories = 420
else:
    burger_calories = 0

if side == 1:
    side_calories = 100
elif side == 2:
    side_calories = 57
elif side == 3:
    side_calories = 70
else:
    side_calories = 0
    
if drink == 1:
    drink_calories = 130
elif drink == 2:
    drink_calories = 160
elif drink == 3:
    drink_calories = 118
else:
    drink_calories = 0
    
if dessert == 1:
    dessert_calories = 167
elif dessert == 2:
    dessert_calories = 266
elif dessert == 3:
    dessert_calories = 75
else:
    dessert_calories = 0

print("Your total Calorie count is " + burger_calories + side_calories + drink_calories + dessert_calories + ".")