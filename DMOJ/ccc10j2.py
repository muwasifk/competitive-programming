a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())

net_nikky = 0
net_byron = 0

nikky_steps = 0
byron_steps = 0

nikky_block = a + b
byron_block = c + d

remainder_nikky_blocks = s%nikky_block
remainder_byron_blocks = s%byron_block

num_nikky_blocks = int(s/nikky_block) 
num_byron_blocks = int(s/byron_block)

net_nikky = (a-b) * num_nikky_blocks
net_byron = (c-d) * num_byron_blocks

for i in range(0, remainder_nikky_blocks):
    if i < a:
        net_nikky += 1
    elif i >= a:
        net_nikky -= 1 

for i in range(0, remainder_byron_blocks):
    if i < c:
        net_byron += 1
    elif i >= c:
        net_byron -= 1

if net_byron > net_nikky:
    print("Byron")
elif net_byron < net_nikky:
    print("Nikky")
else:
    print("Tied")