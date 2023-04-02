input_str = input()

list_inputt = list(input_str)

happy_counter = 0
sad_counter = 0

for i in range(0, len(list_inputt)):
    if list_inputt[i] == ':' and list_inputt[i+1] == '-':
        if list_inputt[i + 2] == ')':
            happy_counter += 1
        elif list_inputt[i+2] == '(':
            sad_counter += 1

if happy_counter > sad_counter:
    print("happy")
elif happy_counter < sad_counter:
    print("sad")
elif happy_counter == sad_counter and happy_counter != 0:
    print("unsure")
else:
    print("none")