word = input()

allowed_letters = ['I', 'O', 'S', 'H', 'Z', 'X', 'N']

list_word = list(word)

counter = 0

for i in range(0, len(list_word)):
    if list_word[i] in allowed_letters:
        counter += 1
    
if counter == len(list_word):
    print("YES")
else:
    print("NO")