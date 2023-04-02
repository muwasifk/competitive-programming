user_input = ''

translation = {
    "CU" : "see you",
    ":-)" : "I'm happy",
    ":-(" : "I'm unhappy",
    ";-)" : "wink",
    ":-P" : "stick out my tongue",
    "(˜.˜)" : "sleepy",
    "TA" : "totally awesome",
    "CCC" : "Canadian Computing Competition",
    "CUZ" : "because", 
    "TY" : "thank-you", 
    "YW" : "you're welcome",
    "TTYL" : "talk to you later",
}

while user_input != 'TTYL':
    user_input = input()
    if user_input in translation:
        print(f'{translation[user_input]}')
    else:
        print(user_input)