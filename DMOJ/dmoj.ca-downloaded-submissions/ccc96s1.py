times_to_work = int(input())

list_inputs = []
for i in range(0,times_to_work):
    new_input = int(input())
    list_inputs.append(new_input)


def sum_divisors(number):
    divisor_sum = 0
    status = ''
    for j in range(1, int(number/2 + 1) + 1):
        if number%j == 0 and j != number:
            divisor_sum += j
        if divisor_sum == number:
            status = 'perfect'
        elif divisor_sum < number:
            status = 'deficient'
        elif divisor_sum > number:
            status = 'abundant'
    return status

for i in range(0, times_to_work):
    current_number = list_inputs[i]
    div_sum = sum_divisors(current_number)
    if div_sum == 'perfect' or div_sum == 'deficient':
        print(f'{current_number} is a {div_sum} number.'   )
    else:
        print(f'{current_number} is an {div_sum} number.')