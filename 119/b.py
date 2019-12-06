N = int(input())
x = 0
u = 0
Y = 0
for i in range(N):
    str = input().split(' ')

    x = float(str[0])
    u = str[1]
    if u == 'JPY':
        Y += x
    else:
        Y += x * 380000.0
print(Y)