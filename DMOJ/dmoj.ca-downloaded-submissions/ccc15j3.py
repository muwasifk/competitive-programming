vowels = ["a", "e", "i", "o", "u"]

closest_vowels = {
    "b" : "a",
    "c" : "a",
    "d" : "e",
    "f" : "e",
    "g" : "e",
    "h" : "i",
    "j" : "i",
    "k" : "i",
    "l" : "i",
    "m" : "o",
    "n" : "o",
    "p" : "o",
    "q" : "o",
    "r" : "o",
    "s" : "u",
    "t" : "u",
    "v" : "u",
    "w" : "u",
    "x" : "u",
    "y" : "u",
    "z" : "u"
}

next_consonant = {
    "b" : "c",
    "c" : "d",
    "d" : "f",
    "f" : "g",
    "g" : "h",
    "h" : "j",
    "j" : "k",
    "k" : "l",
    "l" : "m",
    "m" : "n",
    "n" : "p",
    "p" : "q",
    "q" : "r",
    "r" : "s",
    "s" : "t",
    "t" : "v",
    "v" : "w",
    "w" : "x",
    "x" : "y",
    "y" : "z",
    "z" : "z",
}

inputy = input()
word = list(inputy)

wodry = []
for element in word:
    if element not in vowels: 
        element = element + closest_vowels[element] + next_consonant[element]
        wodry.append(element)
    else:
        wodry.append(element)
    
finstring = ""
for element in wodry:
    finstring += element

print(finstring)