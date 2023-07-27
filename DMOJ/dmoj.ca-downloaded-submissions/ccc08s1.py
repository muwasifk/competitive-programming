cur = ""
ins = []
while "Waterloo" not in cur: 
    cur = input()
    ins.append(cur)

def findmin(blist): 
    current = blist[0]
    for i in blist:
        if i < current: 
            current = i 
    return current

def parseinputs(alist):
    cities = []
    temps = []

    for element in alist: 
        newelement = element.split(" ")
        cities.append(newelement[0])
        temps.append(int(newelement[1]))
    
    return cities, temps

citylist, templist = parseinputs(ins)

leasttemp = findmin(templist)
cityname = citylist[templist.index(leasttemp)]

print(cityname)