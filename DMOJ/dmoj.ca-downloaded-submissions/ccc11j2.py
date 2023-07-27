import sys

humidity = int(input())
num_hours = int(input())

for i in range(1, num_hours + 1):
    altitude = -6 * (i**4) + humidity * (i**3) + 2 * (i**2) + i
    if altitude <= 0: 
        print(f"The balloon first touches ground at hour:\n{i}")
        sys.exit()
print("The balloon does not touch ground in the given time.")