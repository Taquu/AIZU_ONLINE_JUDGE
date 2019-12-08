matrixA = []
matrixB = []
n, m, l = map(int, input().split())

#matrixCの初期化(n行l列)
matrixC = [[0 for i in range (l)]for k in range (n)]

#matrixAの入力
for i in range (n):
    matrixA.append(list(map(int, input().split())))
#matrixBの入力
for j in range (m):
    matrixB.append(list(map(int, input().split())))

#matrixCの導出
for i in range (n):
    for j in range (m):
        for k in range (l):
            matrixC[i][k] += matrixA[i][j] * matrixB[j][k]

#matrixCの出力
for i in range (n):
    print(" ".join(map(str, matrixC[i])))
