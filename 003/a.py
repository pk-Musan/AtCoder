income = 0
N = int(input())

for n in range(N):
    income += (n+1) * 10000

print(int(income/N))
