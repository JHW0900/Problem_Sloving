import sys
input = sys.stdin.readline

N, L = map(int, input().split())

while True:
    if L > 100: break
    t = 0
    for i in range(1, L): t += i
    x = (N - t) // L

    if x < 0: 
        L += 1
        continue

    result = [i for i in range(x, x + L)]

    if sum(result) == N: break
    L += 1

if L > 100: print(-1)
else:
    for i in result:
        print(i, end = ' ')