num_lines = int(input())

    inputs = []

    alphabet_and_digits = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]

    months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]

    for i in range(0, num_lines):
        new_in = input()
        inputs.append(new_in)

    variable_one = False
    variable_two = False

    def match_case_one(string_one):
        list_one = list(string_one)
        
        for m in range(0, len(list_one)):
            variable_one = False
            try:
                if len(list_one) - m > 8 and m != 0:
                    if list_one[m+8] not in alphabet_and_digits and list_one[m-1] not in alphabet_and_digits: 
                        variable_one = True
                elif len(list_one) - m > 8 and m == 0:
                    if list_one[m+8] not in alphabet_and_digits:
                        variable_one = True
                elif m != 0:
                    if list_one[m-1] not in alphabet_and_digits:
                        variable_one = True
                elif m == 0:
                    variable_one = True

                if variable_one == True:
                    a = int(list_one[m])
                    b = int(list_one[m+1])
                    if list_one[m+2] == '/':
                        c = int(list_one[m+3])
                        d = int(list_one[m+4])
                        if list_one[m+5] == '/':
                            e = int(list_one[m+6])
                            f = int(list_one[m+7])
                            if int(str(e) + str(f)) <= 24:
                                list_one[m+6] = f'20'
                                list_one[m+7] = f'{e}{f}'
                            elif int(str(e) + str(f)) > 24:
                                list_one[m+6] = f'19'
                                list_one[m+7] = f'{e}{f}'
                
            except: 
                continue
            
        return_str = ''
        for j in list_one:
            return_str += j
        return str(return_str)

    def match_case_two(string_one):
        list_one = list(string_one)
        
        for m in range(0, len(list_one)):
            variable_two = False
            try:
                if len(list_one) - m > 8 and m != 0:
                    if list_one[m+8] not in alphabet_and_digits and list_one[m-1] not in alphabet_and_digits: 
                        variable_two = True
                elif len(list_one) - m > 8 and m == 0:
                    if list_one[m+8] not in alphabet_and_digits:
                        variable_two = True
                elif m != 0:
                    if list_one[m-1] not in alphabet_and_digits:
                        variable_two = True
                elif m == 0:
                    variable_two = True

                if variable_two == True:
                    a = int(list_one[m])
                    b = int(list_one[m+1])
                    if list_one[m+2] == '.':
                        c = int(list_one[m+3])
                        d = int(list_one[m+4])
                        if list_one[m+5] == '.':
                            e = int(list_one[m+6])
                            f = int(list_one[m+7])
                            if int(str(e) + str(f)) <= 24 and int(f'{c}{d}') <= 12:
                                list_one[m+6] = f'20'
                                list_one[m+7] = f'{e}{f}'
                            elif int(str(e) + str(f)) > 24:
                                list_one[m+6] = f'19'
                                list_one[m+7] = f'{e}{f}'
                
            except: 
                continue
            
        return_str = ''
        for j in list_one:
            return_str += j
        return str(return_str)

    def match_case_three(string_one):
        list_one = string_one.split(" ")
        for i in range(0,len(list_one)):
            if list_one[i] in months:
                new_split = list_one[i+1].split(",")
                if len(new_split) == 2:
                    try:
                        a = int(new_split[0])
                        c = list(list_one[i+2])
                        if len(c) == 2:
                            b = int(c[0])
                        elif len(c) == 3: 
                            d = int(c[0])
                            e = int(c[1])
                            if c[2] not in alphabet_and_digits:
                                b = int(f'{d}{e}')
                        if b <= 24:
                            list_one[i+2] = "20" + list_one[i+2]
                        elif b > 24:
                            list_one[i+2] = "19" + list_one[i+2]
                    except:
                        continue
        rep_string = ''
        for i in range(0, len(list_one)):
            rep_string += f'{list_one[i]} '

        return rep_string   

    for element in inputs:
        new_string = match_case_one(element)
        new_string = match_case_two(new_string)
        new_string = match_case_three(new_string)
        print(new_string)