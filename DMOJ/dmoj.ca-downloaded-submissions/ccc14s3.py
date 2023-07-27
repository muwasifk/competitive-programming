t = int(input())

for _ in range(t):
    n = int(input())

    mountain = []

    for __ in range(n):
        x = int(input())

        mountain.append(x)
    
    branch = [] 

    current = 1 

    while True: 
        if len(mountain) > 0:
            if mountain[-1] == current:
                current += 1
                mountain.pop() 

            elif len(branch) > 0:
                if branch[-1] == current:
                    current += 1
                    branch.pop() 
                
                else:
                    branch.append(mountain.pop())
            
            else:
                branch.append(mountain.pop())
        elif len(branch) > 0:
            if branch[-1] == current: 
                current += 1
                branch.pop()
            else:
                print("N")
                break 
        else:
            print("Y")
            break