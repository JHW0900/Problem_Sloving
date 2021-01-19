import sys
input = sys.stdin.readline

def find(n):
  if n == 1: return False
  for i in range(2, n):
    if n % i == 0: return False
  return True

N = int(input()) 
numbers = list(map(int, input().split()))

count = 0
for i in numbers: 
  if find(i): count += 1
print(count)