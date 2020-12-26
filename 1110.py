N = tmp = int(input())
cnt = 0
while(True):
  cnt += 1
  tmp = (tmp%10*10) + (tmp//10 + tmp%10)
  if N == tmp: break

print(cnt)