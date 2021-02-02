import sys
input = sys.stdin.readline

tuple_types = {'(': ')', '[': ']'}

prev = []
while True:
  now = cmd = list(map(str, input().rstrip()))
  stack = []

  if len(now) == 1 and now[0] == '.':
    break
  # if not cmd[-1] == '.':
  #   prev += cmd
  #   continue
  # else:
  #   cmd = prev + cmd
  #   prev = []
  for i in range(len(cmd)):
    if i == (len(cmd) - 1):
      if len(stack) == 0:
        print('yes')
        break
      else:
        print('no')
        break

    elif cmd[i] == '(' or cmd[i] == '[':
      stack.append(cmd[i])
    elif cmd[i] == ')' or cmd[i] == ']':
      if len(stack) == 0:
        print('no')
        break
      elif tuple_types[stack[-1]] == cmd[i]:
        stack.pop()
      else:
        print('no')
        break