while True:
    s = input()
    if '?' in s:
        break
    else:
        print(int(eval(s)))
