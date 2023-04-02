from math import comb

inputone = input()
inputtwo = input()
uoc = int(input())

split_one = inputone.split()
split_two = inputtwo.split()

a = int(split_one[0])
b = int(split_one[1])

c = int(split_two[0])
d = int(split_two[1])

number_of_passes = abs(a-c) + abs(b-d)

if number_of_passes <= uoc and (uoc - (number_of_passes))%2 == 0:
    print("Y")
else: 
    print("N")