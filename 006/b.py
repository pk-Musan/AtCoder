a = [0, 0, 1]

n = int(input())

if n <= 3:
    print(a[n-1])
else:
    for i in range(n-3):
        a.append((a[i+2] + a[i+1] + a[i]) % 10007)
    print(a[n-1])