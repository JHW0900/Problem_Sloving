# 시각
import sys
input = sys.stdin.readline

n = int(input())
count = 0

for hour in range(n+1):
  for minu in range(60):
    for sec in range(60):
      if hour % 10 == 3 or minu % 10 == 3 or sec % 10 == 3: count += 1
      elif hour // 10 == 3 or minu // 10 == 3 or sec // 10 == 3: count += 1

print(count)