# 거스름돈
import sys
input = sys.stdin.readline

cost = 1000 - int(input())
coin_types = [500, 100, 50, 10, 5, 1]
amount = 0

for coin in coin_types:
  amount += (cost//coin)
  cost %= coin

print(amount)  