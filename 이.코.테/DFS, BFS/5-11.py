# 미로 탈출
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
# 시작 위치 (1, 1) / 괴물 0, 길 1

def dfs(x, y):
  path = 1
  if x < 0 or y < 0 or x >= n or y >= m:
    return 9999999999
  if x == (n-1) and y == (m-1):
    return 1

  if graph[x][y] == 1:
    graph[x][y] = 0
    path += min(dfs(x+1, y), dfs(x-1, y), dfs(x, y+1), dfs(x, y-1))
    return path

  else:
    return 999999999
  
graph = []

for _ in range(n):
  graph.append(list(map(int, input().rstrip())))

print(dfs(0, 0))