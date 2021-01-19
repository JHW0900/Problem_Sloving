import sys
input = sys.stdin.readline

T = int(input())

across_road = [ -1 for _ in range(11)]
cnt = 0

for _ in range(T):
  n, p = map(int, input().split())
  if across_road[n] == -1 : across_road[n] = p
  elif across_road[n] != p :
    across_road[n] = p
    cnt += 1

print(cnt)