A = int(input())
B = int(input())
C = int(input())
cnt = [0 for _ in range(10)]

A = A*B*C
while(True):
  if A == 0:
    break
  cnt[A%10] += 1
  A//=10

for i in range(10):
  print(cnt[i])