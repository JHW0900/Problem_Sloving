# 음료수 얼려 먹기 (BFS)
import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
graph = []
queue = deque()
for _ in range(n):
  graph.append(list(map(int, input().rstrip())))

# 상 하 좌 우
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]

def bfs(x, y):
  if graph[x][y] == 1:
    return False

  graph[x][y] = 1
  queue.append((x, y))

  while queue:
    vx, vy = queue.popleft()

    for i in range(4):
      if vx + dx[i] < 0 or vx + dx[i] >= n or vy + dy[i] < 0 or vy + dy[i] >= m:
        continue
      elif graph[vx + dx[i]][vy + dy[i]] == 0:
        graph[vx + dx[i]][vy + dy[i]] = 1
        queue.append((vx + dx[i], vy + dy[i]))
      else:
        continue

  return True
    
count = 0
for x in range(n):
  for y in range(m):
    count += bfs(x, y)

print(count)