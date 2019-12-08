matrix = []
r, c = map(int, input().split())

for i in range (r): #行の合計の追加
    _line = list(map(int, input().split()))
    _line.append(sum(_line))
    matrix.append(_line)

_col_sum = [] #列の合計の追加
for j in range (c+1):
    num = 0
    for i in range (r):
        num += matrix[i][j]
    _col_sum.append(num)

matrix.append(_col_sum)

for i in range (r+1):
    print(" ".join(map(str, matrix[i])))
