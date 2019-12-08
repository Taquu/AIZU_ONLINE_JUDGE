l = input()
a, b, c = map(int, l.split())

k = 0
for x in range(a, b+1):
    if c % x == 0:
        k += 1

print(k)
