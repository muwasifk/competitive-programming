game_one = str(input())
game_two = str(input())
game_three = str(input())
game_four = str(input())
game_five = str(input())
game_six = str(input())

win_counter = 0

list = [game_one, game_two, game_three, game_four, game_five, game_six]

for i in range(0, 6):
    if list[i] == 'W':
        win_counter += 1

if win_counter == 5 or win_counter == 6:
    print('1')
elif win_counter == 4 or win_counter == 3:
    print('2')
elif win_counter == 2 or win_counter == 1:
    print('3')
else:
    print('-1')