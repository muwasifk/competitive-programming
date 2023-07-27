import copy

b = 0
n = 0

playlist = ['A', 'B', 'C', 'D', 'E']

while b != 4: 
    b = int(input())
    n = int(input())

    if b == 1:
        for i in range(0, n):
            temp = playlist[0]
            playlist.pop(0)
            playlist.append(temp)
    elif b == 2:
        for i in range(0,n):
            temp = copy.copy(playlist)
            for j in range(0, 5):
                playlist[j] = temp[(j-1)%5]
    elif b == 3:
        for i in range(0, n):
            temp = copy.copy(playlist)
            playlist[0] = temp[1]
            playlist[1] = temp[0]
    elif b == 4:
        print(f'{playlist[0]} {playlist[1]} {playlist[2]} {playlist[3]} {playlist[4]}')