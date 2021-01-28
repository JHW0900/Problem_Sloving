# 미로 탈출 (BFS)
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
  graph[y][x] = 1
  queue.append((x, y))

  while queue:
    vx, vy = queue.popleft()
    for i in range(4):
      nx = vx + dx[i]
      ny = vy + dy[i]

      if nx < 0 or nx >= m or ny < 0 or ny >= n:
        continue
      elif nx == 0 and ny == 0:
        continue
      elif graph[ny][nx] == 1:
        graph[ny][nx] = graph[vy][vx] + 1
        queue.append((nx, ny))
      else:
        continue

bfs(0, 0)
print(graph[n-1][m-1])