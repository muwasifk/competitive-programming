bowl_one = int(input())
bowl_two = int(input())
bowl_three = int(input())

list = [bowl_one, bowl_two, bowl_three]

if list[0] > list[1]:
    temp = list[1]
    list[1] = list[0]
    list[0] = temp

if list[1] > list[2]:
    temp = list[2]
    list[2] = list[1]
    list[1] = temp

if list[0] > list[1]:
    temp = list[1]
    list[1] = list[0]
    list[0] = temp

result = list[1]

print(result)