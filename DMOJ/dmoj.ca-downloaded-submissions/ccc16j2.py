line_one = input()
line_two = input()
line_three = input()
line_four = input()

line_one_list = line_one.split(" ")
line_two_list = line_two.split(" ")
line_three_list = line_three.split(" ")
line_four_list = line_four.split(" ")

row_one_sum = int(line_one_list[0]) + int(line_one_list[1]) + int(line_one_list[2]) + int(line_one_list[3])
row_two_sum = int(line_two_list[0]) + int(line_two_list[1]) + int(line_two_list[2]) + int(line_two_list[3])
row_three_sum = int(line_three_list[0]) + int(line_three_list[1]) + int(line_three_list[2]) + int(line_three_list[3])
row_four_sum = int(line_four_list[0]) + int(line_four_list[1]) + int(line_four_list[2]) + int(line_four_list[3])

column_one_sum = int(line_one_list[0]) + int(line_two_list[0]) + int(line_three_list[0]) + int(line_four_list[0])
column_two_sum = int(line_one_list[1]) + int(line_two_list[1]) + int(line_three_list[1]) + int(line_four_list[1])
column_three_sum = int(line_one_list[2]) + int(line_two_list[2]) + int(line_three_list[2]) + int(line_four_list[2])
column_four_sum = int(line_one_list[3]) + int(line_two_list[3]) + int(line_three_list[3]) + int(line_four_list[3])


if row_one_sum == row_two_sum:
    if row_two_sum == row_three_sum:
        if row_three_sum == row_four_sum:
            if column_one_sum == column_two_sum:
                if column_two_sum == column_three_sum:
                    if column_three_sum == column_four_sum:
                        if row_one_sum == column_four_sum:
                            print("magic")
                        else:
                            print("not magic")
                    else:
                        print("not magic")
                else:
                    print("not magic")
            else:
                print("not magic")
        else:
            print("not magic")
    else:
        print("not magic")
else:
    print("not magic")