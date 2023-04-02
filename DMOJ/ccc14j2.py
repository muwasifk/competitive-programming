number_votes = int(input())
vote_str = input()

list_votes = list(vote_str)

a_counter = 0
b_counter = 0

for i in range(0, number_votes):
    if list_votes[i] == 'A':
        a_counter += 1
    if list_votes[i] == 'B':
        b_counter += 1

if a_counter > b_counter:
    print("A")
elif a_counter < b_counter:
    print("B")
else:
    print("Tie")