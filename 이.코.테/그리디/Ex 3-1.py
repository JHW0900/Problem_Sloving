# 거스름돈
import sys
input = sys.stdin.readline

cnt = 0
coin_types = [500, 100, 50, 10]
N = int(input())

for i in coin_types:
  cnt += N // i
  N %= i

print(cnt)