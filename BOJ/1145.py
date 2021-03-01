import sys
input = sys.stdin.readline

num = list(map(int, input().split()))

n = min(num)
while True:
    cnt = 0
    for i in num:
        if n % i == 0:
            cnt += 1
    if cnt >= 3:
        break
    n += 1

print(n)