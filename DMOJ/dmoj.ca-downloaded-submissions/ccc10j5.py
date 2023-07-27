start = input().split(" ")
start = (int(start[0]), int(start[1]))

destination = input().split(" ")
destination = (int(destination[0]), int(destination[1]))

visited_nodes = []  
distance = {}
queue = []

for i in range(1, 9):
    for j in range(1,9):
        ande = (i,j)
        distance[ande] = 0 #initialize

def is_valid(nde):
    x = nde[0]
    y = nde[1]
    if x >= 1 and x <= 8 and y >= 1 and y <= 8:
        return True
    else:
        return False
    
def neighbors(node):
    the_neighbors = []

    x = node[0]
    y = node[1]

    n_one = (x+1, y+2)
    n_two = (x+2, y+1)
    n_three = (x+2, y-1)
    n_four = (x+1, y-2)
    n_five = (x-1,y-2)
    n_six = (x-2,y-1)
    n_seven = (x-2,y+1)
    n_eight = (x-1,y+2)

    neighbs = [n_one, n_two, n_three, n_four, n_five, n_six, n_seven, n_eight]
    for point in neighbs:
        if is_valid(point) == True:
            the_neighbors.append(point)

    return the_neighbors

def bfs(node):
    visited_nodes.append(node)
    queue.append(node)

    while queue:
        s = queue.pop(0)
        for nbr in (neighbors(s)):
            if nbr in visited_nodes:
                continue
            visited_nodes.append(nbr)
            queue.append(nbr)
            distance[nbr] = distance[s] + 1

bfs(start)
print(distance[destination])