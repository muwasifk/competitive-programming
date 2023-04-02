import math

numerator = int(input())
denominator = int(input())

def numldenom(num, den):
    gcd = math.gcd(num, den)  
    return f"{(num//gcd)}/{den//gcd}"

if numerator%denominator == 0: 
    print(numerator//denominator)
elif denominator%numerator == 0:
    print()
elif numerator == 0:
    print(0)
elif numerator == denominator:
    print(1)
elif numerator > denominator:
    gcd = math.gcd((numerator - int(numerator/denominator)), denominator)
    wholepart = numerator//denominator
    newnum = numerator - denominator * wholepart
    fracpart = numldenom(newnum, denominator)
    print(f"{wholepart} {fracpart}")
elif numerator < denominator:
        print(numldenom(numerator, denominator))