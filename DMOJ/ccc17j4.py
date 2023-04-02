d = int(input())
time = ['',1,2,0,0]
counter = 0
overlap = d // 720
d = d % 720

for i in range(d):
    if time[1] == 1 and time[2] == 2 and time[3] == 5 and time[4] == 9:
        time[1] = 0; time[2] = 1; time[3] = 0; time[4] = 0
    elif time[1] == 0 and time[2] == 9 and time[3] == 5 and time[4] == 9:
        time[1] = 1; time[2] = 0; time[3] = 0; time[4] = 0
    elif time[3] == 5 and time[4] == 9:
        time[2] += 1; time[3] = 0; time[4] = 0
    elif time[4] == 9:
        time[3] += 1; time[4] = 0
    else:
        time[4] += 1

    if time[1] == 0 and time[4] - time[3] == time[3] - time[2]:
        counter += 1
    elif time[4] - time[3] == time[3] - time[2] == time[2] - time[1]:
        counter += 1
print(overlap*31+counter)