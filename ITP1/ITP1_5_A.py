while True:
    h, w = map(int, input().split())
    if h == 0 and w == 0:
        break

    line = "#" * w
    for row in range (h):
        print(line)
    print()
