#0, 6, 12, 18, 24
import sys
input = sys.stdin.readline

N = int(input())

cnt = 0
step = 1
while(True):
  step = step + (6*cnt)
  if step >= N: break
  cnt += 1

print(cnt+1)