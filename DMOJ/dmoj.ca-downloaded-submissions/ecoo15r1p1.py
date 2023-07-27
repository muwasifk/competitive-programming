for _ in range (10):
    colors = {
        'orange': 0, 
        'blue': 0,
        'green': 0,
        'yellow': 0,
        'pink': 0,
        'violet': 0,
        'brown': 0,
        'red': 0,
    }

    c = input()

    while (c != "end of box"):
        if c == "end of box": break
        colors[c] += 1
        c = input()

    count = 0

    for i in colors.keys():
        if i != "red": 
            if colors[i] % 7 == 0:
                count += (colors[i]//7)*13
            else: count += colors[i]//7 * 13 + 13
        else: count += colors[i] * 16
    
    print(count)