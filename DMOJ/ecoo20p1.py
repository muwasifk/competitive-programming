orderNotes = {
    'C' : 1, 
    'C#' : 2, 
    'D' : 3, 
    'D#' : 4, 
    'E' : 5,
    'F' : 6,
    'F#' : 7,
    'G' : 8, 
    'G#' : 9,
    'A' : 10,
    'A#': 11, 
    'B' : 12 
}

def check(noteslist):

    a = orderNotes[noteslist[1]] - orderNotes[noteslist[0]] 
    if a < 0: a = 12 - orderNotes[noteslist[0]] + orderNotes[noteslist[1]]

    b = orderNotes[noteslist[2]] - orderNotes[noteslist[1]] 
    if b < 0: b = 12 - orderNotes[noteslist[1]] + orderNotes[noteslist[2]]

    c = orderNotes[noteslist[3]] - orderNotes[noteslist[2]] 
    if c < 0: c = 12 - orderNotes[noteslist[2]] + orderNotes[noteslist[3]]

    if a == 4 and b == 3 and c == 3: return True 
    else: return False

t = int(input())
for _ in range(t):
    notes = input().split(" ")
    if check(notes):
        print('root') 
    elif check(notes[1:len(notes):] + notes[0:1:]): 
        print('third')
    elif check(notes[2:len(notes):] + notes[0:2:]):
        print('second')
    elif check(notes[3:len(notes):] + notes[0:3:]):
        print('first')
    else:
        print('invalid')