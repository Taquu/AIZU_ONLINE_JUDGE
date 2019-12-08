matrixA = []
matrixB = []
resultC = []
n, m = map(int, input().split())
for i in range (n):
    matrixA.append(list(map(int, input().split())))
for i in range (m):
    matrixB.append(int(input()))
for i in range (n):
    num = 0
    for j in range (m):
        num += matrixA[i][j]*matrixB[j]
    resultC.append(num)
for i in range (n):
    print(resultC[i])
