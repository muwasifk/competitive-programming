for _ in range(10):
    s = {}; s = set(); 
    num_emails = int(input())
    for __ in range(num_emails):
        email = input() 
        email = email.lower() 
        ep = email.split("@")
        ep[0] = ep[0].replace('.','')
        if '+' in ep[0]:
            x = ep[0].split('+') 
            ret = x[0] + '@' + ep[1] 
        else:
            ret = ep[0] + '@' + ep[1] 
        
        s.add(ret) 
    
    print(len(s))