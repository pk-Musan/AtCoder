N, K = map(int, input().split())
S = input()

T = ""
C = sorted(list(S.split()))
for n in range(N):
    for c in C:
        
            T = T + c
            C.remove(c)
            break
    