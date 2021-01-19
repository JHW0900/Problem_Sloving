import sys
input = sys.stdin.readline().rstrip()

A, B = map(int, input.split())

tmp = 0
for _ in range(3):
  tmp = tmp*10 + A%10
  A //= 10
A = tmp

tmp = 0
for _ in range(3):
  tmp = tmp*10 + B%10
  B //= 10
B = tmp

print(max(A,B))