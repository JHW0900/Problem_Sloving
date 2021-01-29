n = list(map(int, input()))
l = len(n)

for i in range(l):
  print("[%d]" % (n[i]*(10**(l-i-1))))