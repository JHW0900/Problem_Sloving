def solve(n):
  if n < 100:
    return 1

  ret = 0
  n = str(n)

  sub = int(n[1]) - int(n[0])
  for i in range(2, len(n)):
    if sub != (int(n[i]) - int(n[i-1])):
      break
    ret = 1
  return ret


if __name__ == "__main__":
  cnt = 0
  N = int(input())
  for i in range(1, N+1):
    if solve(i) == 1: cnt += 1
  print (cnt)