trout_points = int(input())
pike_points = int(input())
pickerel_points = int(input())
limit_points = int(input())

fish_counter = 0

for i in range(0, limit_points + 1):
    for j in range(0, limit_points + 1):
        for k in range(0, limit_points + 1):
            total_points = i * trout_points + j * pike_points + k * pickerel_points
            if total_points <= limit_points and [i, j, k] != [0 , 0, 0]:
                print(f'{i} Brown Trout, {j} Northern Pike, {k} Yellow Pickerel')
                fish_counter += 1
  
print(f"Number of ways to catch fish: {fish_counter}")