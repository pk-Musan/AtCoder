N = int(input())
A = list(map(int, input().split()))
answer = 0

for n in range(N):
    while True:
        if(A[n]%2 == 0 or A[n]%3 == 2):
            A[n] -=1
            answer +=1
        else:
            break
print(answer)
        