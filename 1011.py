import sys
input = sys.stdin.readline

def move_count(n):
  i = 1
  while(True):
    if ((i**2) - (i - 1)) <= n <= ((i**2) + i):
      if n <= i**2:
        return (2*i -1)
      else:
        return 2*i
    else: i += 1

T = int(input())

for _ in range(T):
  cnt = 0
  x, y = map(int, input().split())
  print(move_count(y - x))