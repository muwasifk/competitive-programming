lower_range = int(input())
upper_range = int(input())

def num_divisors(number):
    counter = 0
    for i in range (1, number + 1):
        if number%i == 0:
            counter += 1
    return counter

ncounter = 0
for j in range(lower_range, upper_range + 1):
    if num_divisors(j) == 4:
        ncounter += 1

print(f'The number of RSA numbers between {lower_range} and {upper_range} is {ncounter}')