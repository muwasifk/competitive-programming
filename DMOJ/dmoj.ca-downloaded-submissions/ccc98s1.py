num_lines = int(input())
sentences = []
final_sentence = ""
for i in range(0,num_lines):
    new_sentence = input()
    sentences.append(new_sentence)

for i in range(0,num_lines):
    current_sentence = sentences[i]
    words_list = current_sentence.split(" ")
    for j in range(0, len(words_list)):
        if int(len(str(words_list[j]))) == 4:
            words_list[j] = '****'

    for l in range(0,len(words_list)):
        final_sentence += f'{words_list[l]} '

    print("\n" + final_sentence)
    final_sentence = ""