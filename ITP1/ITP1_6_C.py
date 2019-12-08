tbl = [[[0 for i in range(10)] for j in range(3)] for k in range(4)]
line = "#" * 20

n = int(input())
for i in range (n):
    b, f, r, v = list(map(int, input().split()))
    tbl[b-1][f-1][r-1] += v

for i in range(4):
    for j in range(3):
        for k in range(10):
            print(f" {tbl[i][j][k]}", end = "")
        print()
    if int(i) < 3:
        print(line)
