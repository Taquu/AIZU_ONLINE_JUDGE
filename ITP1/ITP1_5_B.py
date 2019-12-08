while True:
    h, w = map(int, input().split())
    if h == 0 and w == 0:
        break

    frame = "#" * w
    dots = "#" + "." * (w-2) + "#"
    print(frame)
    for row in range (h-2):
        print(dots)
    print(frame)
    print()
