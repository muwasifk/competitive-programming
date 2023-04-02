import sys

reading_one = int(input())
reading_two = int(input())
reading_three = int(input())
reading_four = int(input())

reading_list = [reading_one, reading_two, reading_three, reading_four]


increasing_sorted_list = sorted(reading_list)
decreasing_sorted_list = sorted(reading_list, reverse = True)
for elem in reading_list:
    if reading_list.count(elem) > 1 and reading_list.count(elem) < 4:
        print("No Fish")
        sys.exit()
        
if reading_one == reading_two and reading_three == reading_two and reading_four == reading_three:
    print("Fish At Constant Depth")
elif reading_list == increasing_sorted_list:
    print("Fish Rising")
elif reading_list == decreasing_sorted_list:
    print("Fish Diving")
else:
    print("No Fish")