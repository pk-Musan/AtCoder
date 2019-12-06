line1 = list(input())
line2 = list(input())
line3 = list(input())
line4 = list(input())

list = [line1, line2, line3, line4]

#for line in reversed(list):
#    for l in reversed(line):
#        print(l, end="")
#    print()

for line in list[::-1]:
    for l in line[::-1]:
        print(l, end="")
    print()
