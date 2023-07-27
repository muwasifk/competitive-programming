data_sets = int(input())

subjects = []
verbs = []
objects = []

for m in range(0, data_sets):

    num_subjects = int(input())
    num_verbs = int(input())
    num_objects = int(input())

    for i in range(0, num_subjects):
        in_put = str(input())
        subjects.append(in_put)

    for i in range(0,num_verbs):
        in_put = str(input())
        verbs.append(in_put)

    for i in range(0,num_objects):
        in_put = str(input())
        objects.append(in_put)

    for l in range(0,len(subjects)):
        for j in range(0, len(verbs)):
            for k in range(0, len(objects)):
                print(f'{subjects[l]} {verbs[j]} {objects[k]}.')

    subjects = []
    verbs = []
    objects = []