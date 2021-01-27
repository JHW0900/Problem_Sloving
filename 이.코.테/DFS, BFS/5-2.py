# Queue test
import sys
from collections import deque
input = sys.stdin.readline

queue = deque()

while True:
  n = int(input())
  if n == -1:
    queue.popleft()
  else:
    queue.append(n)
  
  print(queue)