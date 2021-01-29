# 로프
import sys
input = sys.stdin.readline

n = int(input())
rope = []
for _ in range(n):
  rope.append(int(input()))
rope = sorted(rope, reverse=True)

weight = 0
for i in range(n):
  weight = max(weight, rope[i] * (i + 1))

print(weight)