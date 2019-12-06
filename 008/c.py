N = int(input())
C = []
Face = []

for n in range(N):
    C.append(int(input()))
    
for f in range(math.factorial(N)):
    Face.append([True]*N)

