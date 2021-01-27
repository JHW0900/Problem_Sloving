# 음료수 얼려 먹기
import sys
input = sys.stdin.readline

# 0: 길, 1: 벽
n, m = map(int, input().split())
graph = []
for i in range(n):
  graph.append(list(map(int, input().rstrip())))
  
def dfs(x, y):
  if x < 0 or y < 0 or y >= m or x >= n:
    return False

  if graph[x][y] == 0:
    graph[x][y] = 1

    dfs(x, y-1)
    dfs(x, y+1)
    dfs(x-1, y)
    dfs(x+1, y)

    return True
  return False

count = 0
for y in range(m):
  for x in range(n):
    if dfs(x, y) == True:
      count += 1

print(count)