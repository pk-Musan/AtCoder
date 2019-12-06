N, M = map(int, input().split())
adult, old, baby = 0, 0, 0
if 2*N > M:
    print('-1 -1 -1')
else:
    #  old = 0
    #  0 <= M - 2*N - 2*baby
    #  baby <= (M - 2*N)/2
    for baby in range( (M - 2*N)//2 + 1):
        # 3*old = M - 2*(N - old - baby) - 4*baby
        old = M - 2*N - 2*baby
        adult = N - old - baby
        
        if 2*adult + 3*old + 4*baby == M and adult + old + baby == N and adult >= 0:
            print(adult, old, baby)
            exit()
    print('-1 -1 -1')
    
        