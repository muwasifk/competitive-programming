n = int(input())

ss = []

for i in range(4):
    ss.append(input())

pos = set() 

for a in range(4):
    for b in range(4):
        if a in [b]:
            continue
        for c in range(4):
            if c in [a, b]:
                continue
            for d in range(4):
                if d in [a, b, c]:
                    continue
                for x in ss[a]:
                    pos.add(x)
                    for xx in ss[b]:
                        pos.add(x+xx)
                        for xxx in ss[c]:
                            pos.add(x+xx+xxx)
                            for xxxx in ss[d]:
                                pos.add(x+xx+xxx+xxxx)
for i in range(n):
    if input() in pos: print("YES")
    else: print("NO")