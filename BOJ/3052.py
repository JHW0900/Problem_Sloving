stack = [ -1 for _ in range(10)]
cnt = 0
for i in range(10): 
  stack[i] = int(input()) % 42
  for j in range(i):
    if stack[j] == stack[i]: break
    elif (i - 1) == j: cnt += 1

print(cnt+1)