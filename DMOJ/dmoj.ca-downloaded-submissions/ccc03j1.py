tine_length = int(input())
tine_spacing = int(input())
handle_length = int(input())

base_length = tine_spacing*2 + 3

if base_length%2 == 1:
    base_center = int(base_length/2 + 0.5)
else:
    base_center = base_length/2

tine = ""

for m in range(0, tine_length):
    for i in range(0,3):
        tine += "*"
        if i != 2:
            for j in range(0, tine_spacing):
                tine += " "
    # tine += "\n"
    print(tine)
    tine=""

for x in range(0,base_length):
    tine += "*"
print(tine)
tine=""

for h in range(0,handle_length):
    for y in range(0,base_center-1):
        tine += " "

    tine += "*"
    print(tine)
    tine=""