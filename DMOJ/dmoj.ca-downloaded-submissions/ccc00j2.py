lower_bound = int(input())
upper_bound = int(input())

rotatable = ['0', '1', '8']

master_counter = 0

def one_digit(num):
    if str(num) in rotatable:
        return True
    else:
        return False

def two_digit(num):
    list_num = list(str(num))
    if num == 0:
        return True
    if len(list_num) != 2:
        return False
    if list_num[0] == list_num[1] and list_num[0] in rotatable:
        return True
    elif num == 69 or num == 96:
        return True
    else:
        return False

def three_digit(num):
    list_num = list(str(num))
    if one_digit(int(list_num[1])) == True and two_digit(int(list_num[0] + list_num[2])) == True:
        return True
    else:
        return False

def four_digit(num):
    list_num = list(str(num))
    if two_digit(int(list_num[0] + list_num[3])) == True and two_digit(int(list_num[1] + list_num[2])) == True:
        return True
    else:
        return False

def five_digit(num):
    list_num = list(str(num))
    if one_digit(int(list_num[2])) == True:
        if two_digit(int(list_num[1] + list_num[3])) == True:
            if two_digit(int(list_num[0] + list_num[4])) == True:
                return True
            else:
                return False
        else:
            return False
    else:
        return False

for i in range(lower_bound, upper_bound + 1):
    if len(str(i)) == 1:
        if one_digit(i):
            master_counter += 1
    elif len(str(i)) == 2:
        if two_digit(i):
            master_counter += 1
    elif len(str(i)) == 3:
        if three_digit(i):
            master_counter += 1
    elif len(str(i)) == 4:
        if four_digit(i):
            master_counter += 1
    elif len(str(i)) == 5:
        if five_digit(i):
            master_counter += 1

print(master_counter)