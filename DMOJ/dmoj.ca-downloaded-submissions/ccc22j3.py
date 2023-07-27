s = input() 

ss = ""
for i in range(0, len(s)):
    if s[i].isalpha() and s[i-1].isnumeric() and i != 0:
        if "-" in ss:
            x = ss.split("-")
            print(f"{x[0]} loosen {x[1]}")
        else:
            x = ss.split("+")
            print(f"{x[0]} tighten {x[1]}")
        
        ss = s[i]
    else:
        ss += s[i] 
    
if "-" in ss:
    x = ss.split("-")
    print(f"{x[0]} loosen {x[1]}")
else:
    x = ss.split("+")
    print(f"{x[0]} tighten {x[1]}")