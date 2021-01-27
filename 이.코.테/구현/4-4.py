# 게임 개발
import sys
input = sys.stdin.readline

def turn_left(direction):
  if direction == 0: return 3
  return direction - 1

dx = [0, 1, 0, -1]
dy = [-1, 0, 1, -1]

n, m = map(int, input().split())
x, y, sight = map(int, input().split())
world = [ [] for _ in range(n) ]
for i in range(n): world[i] = list(map(int, input().split()))
world[x][y] = 2

count = 1
turn = 0
while True:
  ns = turn_left(sight)
  nx = x + dx[ns]
  ny = y + dy[ns]

  if world[nx][ny] == 0:
    count += 1
    world[nx][ny] = 2
    sight = ns
    x = nx
    y = ny
    turn = 0
  elif turn == 4:
    turn = 0
    nx = x - dx[sight]
    ny = y - dy[sight]
    if world[nx][ny] == 1:
      break
    x = nx
    y = ny
  else:
    sight = ns
    turn += 1

print(count)