import copy

uInput = input()
lInput = uInput.split(" ")

for i in range(0,len(lInput)):
    lInput[i] = int(lInput[i])

jlist = [0]
for i in range(0, len(lInput)):
    jlist.append(lInput[i] + jlist[i])

main_list = jlist
secondary_list = jlist.copy()

def list_to_string(listy):
    stringy = f'{listy[0]}'
    for k in range(1,5):
        stringy += f' {listy[k]}'
    return stringy


for i in range(0, 5):
    print_list = []
    for j in range(0,5):
        print_list.append(abs(main_list[i] - secondary_list[j]))
    print(list_to_string(print_list))