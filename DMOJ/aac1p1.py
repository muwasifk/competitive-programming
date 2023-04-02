s = input().split(" ")
square = int(s[0])
circle = int(s[1])

if square*square > 3.14 * circle * circle:
    print("SQUARE")
else:
    print("CIRCLE")