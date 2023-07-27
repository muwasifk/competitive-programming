inp = str(input())

while (inp != "99999"):
    arr = list(inp)

    if int(arr[0]) + int(arr[1]) == 0:
        print(f"{current} {arr[2]}{arr[3]}{arr[4]}")
    elif ((int(arr[0]) + int(arr[1]))%2 == 0):
        print(f"right {arr[2]}{arr[3]}{arr[4]}")
        current = "right" 
    elif ((int(arr[0]) + int(arr[1]))%2 == 1):
        print(f"left {arr[2]}{arr[3]}{arr[4]}")
        current = "left" 
        
    
    inp = input()