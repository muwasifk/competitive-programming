import sys
user_input = ''
vowels = ['a', 'e', 'i', 'o', 'y']

i = True
while i == True:
    user_input = input()
    listUI = list(user_input)
    if user_input == 'quit!':
        i = False
    elif len(list(user_input)) <= 4:
        print(user_input)
    elif user_input.endswith("or") and len(listUI) > 4:
        if listUI[-3] not in vowels:
            splitted_str = user_input.split("or")
            response = splitted_str[0] + "our"
            print(response)
        else:
            print(user_input)
    else:
        print(user_input)