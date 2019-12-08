import sys
s = sys.stdin.readline().rstrip()*2
l = sys.stdin.readline().rstrip()
if l in s:
    print("Yes")
else:
    print("No")
