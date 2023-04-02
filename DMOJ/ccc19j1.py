a_three = input()
a_two = input()
a_one = input()

b_three = input()
b_two = input()
b_one = input()

a_score = a_three * 3 + a_two * 2 + a_one
b_score = b_three * 3 + b_two * 2 + b_one

if a_score > b_score:
    print('A')
elif b_score > a_score:
    print('B')
elif b_score == a_score:
    print('T')