# DFS 예제
def dfs(graph, n, visited):
  visited[n] = True
  print(n, end=" ")
  for i in graph[n]:
    if not visited[i]:
      dfs(graph, i, visited)
  
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

dfs(graph, 1, visited)