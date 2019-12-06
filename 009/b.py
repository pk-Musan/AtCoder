#  N = set(map(int, input().split()))
N = int(input())
A = {int(input()) for n in range(N)}

A.remove(max(A))
print(max(A))