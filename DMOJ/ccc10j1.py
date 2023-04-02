number_given = int(input())

values = []

for i in range(1, number_given+1):
    if number_given-i not in values and number_given-i <= 5 and i <= 5:
        if number_given - i > 0 or number_given <= 5:
            values.append(i)

print(len(values))