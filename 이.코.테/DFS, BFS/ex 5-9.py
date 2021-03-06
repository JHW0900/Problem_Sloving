# BFS 예제
from collections import deque

def bfs(graph, n, visited):
  queue.append(n)
  visited[n] = True

  while queue:
    v = queue.popleft()
    print(v, end = " ")
    for i in graph[v]:
      if not visited[i]:
        visited[i] = True
        queue.append(i)
  

graph = [
  [],
  [2, 3, 8],
  [1, 7],
  [4, 5],
  [3, 5],
  [3, 4],
  [7],
  [2, 6, 8],
  [1, 7]
]

visited = [False] * 9
queue = deque()

bfs(graph, 1, visited)