lines = int(input())
line_inputs = []


for i in range(0, lines):
    input_string = str(input())
    line_inputs.append(input_string)

for i in range(0, len(line_inputs)):
    response = ""
    stringery = line_inputs[i]
    splited_str = stringery.split(" ")
    for i in range(0, int(splited_str[0])):
        response += str(splited_str[1])
    print(response)