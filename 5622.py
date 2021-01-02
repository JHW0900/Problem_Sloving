import sys
input = sys.stdin.readline().rstrip()

def tel(n):
  if 'A' <= n <= 'C':
    return 3
  elif 'D' <= n <= 'F':
    return 4
  elif 'G' <= n <= 'I':
    return 5
  elif 'J' <= n <= 'L':
    return 6
  elif 'M' <= n <= 'O':
    return 7
  elif 'P' <= n <= 'S':
    return 8
  elif 'T' <= n <= 'V':
    return 9
  elif 'W' <= n <= 'Z':
    return 10
  else:
    return

if __name__ == "__main__":
  cmd = input

  summary = 0
  for i in cmd:
    summary += tel(i)

  print(summary)