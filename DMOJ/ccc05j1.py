daytime = int(input())
evening = int(input())
weekend = int(input())

if daytime >= 100:
    plana_daytime = ((daytime - 100) * 25)/100
else:
    plana_daytime = 0

if daytime >= 250:
    planb_daytime = ((daytime - 250) * 45)/100
else:
    planb_daytime = 0

plana_evening = ((evening - 0) * 15)/100
planb_evening = ((evening - 0) * 35)/100

plana_weekend = ((weekend - 0) * 20)/100
planb_weekend = ((weekend - 0) * 25)/100

plana_total = round(float(plana_daytime + plana_evening + plana_weekend),2)
planb_total = round(float(planb_daytime + planb_evening + planb_weekend),2)

split_a = str(plana_total).split(".")
split_b = str(planb_total).split(".")

if len(split_a[1]) == 1:
    plana_total = str(plana_total) + '0'

if len(split_b[1]) == 1:
    planb_total = str(planb_total) + '0'

print(f"Plan A costs {plana_total}")
print(f"Plan B costs {planb_total}")

if float(plana_total) > float(planb_total):
    print("Plan B is cheapest.")
elif float(plana_total) < float(planb_total):
    print("Plan A is cheapest.")
else:
    print("Plan A and B are the same price.")