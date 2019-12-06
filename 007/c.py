import queue

R, C = map(int, input().split())
start = list(map(int, input().split()))
goal = list(map(int, input().split()))
c = []
v = []
q = queue.Queue()

for r in range(R):
    c.append(list(input()))
    v.append([-1]*C)

#  print(c)
y = start[0]-1
x = start[1]-1
q.put([y, x])
v[y][x] = 0
#  print(v)

def move(y, x):
    return [[y-1, x], [y+1, x], [y, x-1], [y, x+1]]

while True:
    for yy, xx in move(y, x):
        if c[yy][xx] == '.' and v[yy][xx] < 0:
            v[yy][xx] = v[y][x] + 1
            #  print(yy, xx)
            q.put([yy, xx])
    y, x = q.get()
    if y == goal[0] - 1 and x == goal[1] - 1:
        print(v[y][x])
        break