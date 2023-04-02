list = []
high_list = ['king', 'queen', 'jack', 'ace']
player_a = 0
player_b = 0

for i in range(0, 52):
    card = input()
    list.append(card)

for i in range(0, 52):
    current_card = list[i]
    cards_remaining = 51 - i
    if current_card == 'ace' and cards_remaining >= 4:
        if list[i + 1] not in high_list and list[i + 2] not in high_list and list[i + 3] not in high_list and list[i + 4] not in high_list:
            if i%2 == 0:
                player_a += 4
                print("Player A scores 4 point(s).")
            else:
                player_b += 4
                print("Player B scores 4 point(s).")
    elif current_card == 'king' and cards_remaining >= 3:
        if list[i + 1] not in high_list and list[i + 2] not in high_list and list[i + 3] not in high_list:
            if i%2 == 0:
                player_a += 3
                print("Player A scores 3 point(s).")
            else:
                player_b += 3
                print("Player B scores 3 point(s).")
    elif current_card == 'queen' and cards_remaining >= 2:
        if list[i + 1] not in high_list and list[i + 2] not in high_list:
            if i%2 == 0:
                player_a += 2
                print("Player A scores 2 point(s).")
            else:
                player_b += 2
                print("Player B scores 2 point(s).")
    elif current_card == 'jack' and cards_remaining >= 1:
        if list[i+1] not in high_list:
            if i%2 == 0:
                player_a += 1
                print("Player A scores 1 point(s).")
            else:
                player_b += 1
                print("Player B scores 1 point(s).")

print(f'Player A: {player_a} point(s).\nPlayer B: {player_b} point(s).')