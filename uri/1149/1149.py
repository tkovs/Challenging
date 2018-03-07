lista = list(map(int, input().split()))
a = None
n = 0

for i in lista:
    if a == None:
        a = i
    else:
        if (i > 0):
            n = i
            break

print(sum([x + a for x in range(n)]))