while True:
    blk_wh = "#." * 150
    h, w = map(int, input().split())
    if h == 0 and w ==0:
        break

    for row in range (h):
        if row % 2 == 0:
            print(blk_wh[:w])
        else:
            print(blk_wh[1:w+1])
    print()
