l = input()
numbers = list(map(int, l.split()))
numbers.sort()
str_num = list(map(str, numbers))

print(" ".join(str_num))
