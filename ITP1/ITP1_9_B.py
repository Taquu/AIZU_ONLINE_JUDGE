while True:
    s = input()
    if s == "-":
        break
    for i in range (int(input())):
        a = int(input())
        s = s[a:]+s[:a]
    print(s)
