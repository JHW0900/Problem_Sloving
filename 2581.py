import sys
input = sys.stdin.readline

def find(n):
  if n == 1: return False
  for i in range(2, n):
    if n % i == 0: return False
  return True

M = int(input())
N = int(input())

numbers = list()

for i in range(M, N+1):
  if find(i): numbers.append(i)

if len(numbers) > 0:
  print(sum(numbers))
  print(min(numbers))
else:
  print(-1)