# 동전 0
import sys
input = sys.stdin.readline

n, k = map(int, input().split())
amount = 0
coin_types = []

for _ in range(n):
  coin_types.append(int(input()))

for i in range(len(coin_types) - 1, -1, -1):
  if k == 0:
    break
  elif not k // coin_types[i] == 0:
    amount += (k // coin_types[i])
  k %= coin_types[i]

print(amount)