print("Ready")

s = input()
while s != "  ":
    if s == "db" or s == "bd" or s == "pq" or s == "qp":
        print("Mirrored pair")
    else:
        print("Ordinary pair")
    
    s = input()