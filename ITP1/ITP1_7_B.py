while True:
    n, x = map(int, input().split())
    if n == 0 and x == 0:
        break
    combi = 0
    for a in range (1, n-1):
        for b in range (a+1, n): # c>b>a
            c = x - a - b # x = a+b+c
            if c <= b:
                break
            elif c > n:
                continue
            else:
                combi += 1
    print(combi)
