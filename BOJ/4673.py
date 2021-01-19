import sys
sys.setrecursionlimit(10**3)

def d(n):
  sn = n
  while n != 0:
    sn += n%10
    n //= 10
  if sn > 10000: return
  lst[sn] = 1
  return d(sn)

lst = [ 0 for _ in range(10001)]
for i in range(1, 10001):
  if lst[i] == 0: 
    print(i)
    d(i)