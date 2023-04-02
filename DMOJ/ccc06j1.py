burger = input()
side_order = input()
drink = input()
dessert = input()

burger_table = {'1':'461', '2':'431', '3':'420', '4':'0'}
side_order_table = {'1':'100', '2':'57', '3':'70', '4':'0'}
drink_table = {'1':'130', '2':'160', '3':'118', '4':'0'}
dessert_table = {'1':'167', '2':'266', '3':'75', '4':'0'}

calorie_count = int(burger_table[burger]) + int(side_order_table[side_order]) + int(drink_table[drink]) + int(dessert_table[dessert])
print(f'Your total Calorie count is {calorie_count}.')