n = int(input())
cards = dict()

for i in range (n):
    card = input()
    cards[card] = True

for m in ["S", "H", "C", "D"]:
    for i in range(1, 14):
        key = m + " " + str(i)
        if not key in cards:
            print(key)
