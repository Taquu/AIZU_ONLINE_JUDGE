l = input()
w, h, x, y, r = map(int, l.split())

if x+r>w or x-r<0:
    print("No")
elif y+r>h or y-r<0:
    print("No")
else :
    print("Yes")
