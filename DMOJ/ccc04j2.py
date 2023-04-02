current_yr = int(input())
future_yr = int(input())

for i in range(current_yr, future_yr + 1):
    if (i - current_yr)%60 == 0:
        print(f'All positions change in year {i}')