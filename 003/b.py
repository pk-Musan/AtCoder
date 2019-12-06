S = list(input())
T = list(input())

flag = False

A = ['a', 't', 'c', 'o', 'd', 'e', 'r']

for s, t in zip(S, T):
    if s == t:
        continue
    elif s == '@' or t == '@':
        for a in A:
            if a == t or a == s:
                break
            if a == 'r':
                print('You will lose')
                exit()
    else:
        print('You will lose')
        exit()

print('You can win')

        
	    
