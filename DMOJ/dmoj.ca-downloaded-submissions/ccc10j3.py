import sys
def func_one(x, n):
    x = n

def func_two(x):
    print(x)

def func_three(x, y):
    x = x+y

def func_four(x,y):
    x = x*y

def func_five(x,y):
    x = x-y

def func_six(x,y):
    x = int(x/y)

def func_seven():
    sys.exit()

i = 0
while i != 7:
    inputy = input()
    input_list = inputy.split(" ")
    command = input_list[0]
    if command == 1:
        func_one(input_list[1], input_list[2])
    elif command == 2:
        func_two(input_list[1])
    elif command == 3:
        func_three(input_list[1], input_list[2])
    elif command == 4:
        func_four(input_list[1], input_list[2])
    elif command ==  5:
        func_five(input_list[1], input_list[2])
    elif command == 6:
        func_four(input_list[1], input_list[2])
    elif command == 7:
        func_seven()