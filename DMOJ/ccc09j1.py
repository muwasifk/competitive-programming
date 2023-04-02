digit_one = int(input())
digit_two = int(input())
digit_three = int(input())

final_isbn = f'9780921418{digit_one}{digit_two}{digit_three}'

char_list = list(final_isbn)

sum = 0

for i in range(0,13):
    if i%2 == 0:
        sum += int(char_list[i])
    else:
        sum += int(3 * int((char_list[i])))

test = f'The 1-3-sum is {sum}'

print(test)