N = int(input())
S = []
count = []

for n in range(N):
    S.append(input())
    count.append(0)
    
for n1 in range(N):
    for n2 in range(N):
        if S[n1] == S[n2]:
            count[n1] += 1
            
for n in range(N):
    if count[n] == max(count):
        print(S[n])
        break