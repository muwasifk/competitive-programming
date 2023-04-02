N = int(input())
swifts = input()
semaphores = input()

swifts_scores = swifts.split(" ")
semaphores_scores = semaphores.split(" ")

x = [0]
sum_one = 0
sum_two = 0
for i in range(0, N):
    sum_one += int(swifts_scores[i])
    sum_two += int(semaphores_scores[i])

    if sum_one == sum_two:
        x.append(i+1)

print(max(x))