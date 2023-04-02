for _ in range(5): 
    cur = input(); sc = ""; idx = 0; 
    while idx < len(cur) - 1:
        if cur[idx] == "'":
            end = cur[idx + 1 : ].index("'") + idx + 1; sc += cur[idx + 1 : end] + " "; idx = end; 
        elif cur[idx] == '"':
            end = cur[idx + 1 : ].index('"') + idx + 1; sc += cur[idx + 1 : end] + " "; idx = end;
        elif cur[idx] == "/" and cur[idx + 1] == "*":
            end = cur[idx + 2 : ].index('*/') + idx + 2; sc += cur[idx + 2 : end] + " "; idx = end;
        elif cur[idx] == "/" and cur[idx + 1] == "/":
            sc += cur[idx + 2 : ] + " "; idx = len(cur); 
        
        idx += 1
    
    print(sc[0:-1])