s = input()
for i in range (int(input())):
    order = input().split()
    a, b = int(order[1]), int(order[2])
    if "print" in order:
        print(s[a:b+1])
    elif "replace" in order:
        s = s[:a] + order[3] + s[b+1:]
    else:
        s = s[:a] + s[a:b+1][::-1] + s[b+1:]
