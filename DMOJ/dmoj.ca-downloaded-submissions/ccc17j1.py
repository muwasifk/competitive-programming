x = int(input())
y = int(input())

parity_x = ''
parity_y = ''

if x > 0:
    parity_x = 'positive'
else:
    parity_x = 'negative'

if y > 0:
    parity_y = 'positive'
else:
    parity_y = 'negative'

if parity_x == 'positive' and parity_y == 'positive':
    print('1')
elif parity_x == 'negative' and parity_y == 'negative':
    print('3')
elif parity_x == 'positive' and parity_y == 'negative':
    print('4')
elif parity_x == 'negative' and parity_y == 'positive':
    print('2')