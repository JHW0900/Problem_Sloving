import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
  cmd = list(map(str, input()))
  
  stack = []
  tri = True
  for i in range(len(cmd)):
    if cmd[i] == ')':
      if len(stack) == 0:
        tri = False
        break
      stack.pop()
    
    elif cmd[i] == '(':
      stack.append('(')
  if not tri or len(stack) > 0: print('NO')
  else: print('YES')