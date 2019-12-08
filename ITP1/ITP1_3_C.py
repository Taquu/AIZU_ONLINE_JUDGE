while True:
    l = input()
    a, b = map(int, l.split())
    if a == 0 and b == 0:
        break
    elif a < b:
        print(a, b)
    else:
        print(b, a)
