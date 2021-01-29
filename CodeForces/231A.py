# Team
import sys
input = sys.stdin.readline

n = int(input())

count = 0
for _ in range(n):
  problem = list(map(int, input().split()))
  if problem.count(1) >= 2:
    count += 1

print(count)