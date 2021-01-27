# Stack test
import sys
input = sys.stdin.readline

stack = []

while True:
  n = int(input())
  if n == -1:
    stack.pop()
  else:
    stack.append(n)

  print(stack)