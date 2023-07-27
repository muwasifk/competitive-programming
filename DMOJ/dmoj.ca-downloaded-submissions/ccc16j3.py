S = input()
L = 1
for i in range(len(S) + 1):
    for j in range(i):
        if S[j:i] == S[j:i][::-1]:
            L = max(L, i - j)
print(L)