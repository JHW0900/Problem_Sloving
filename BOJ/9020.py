import sys
input = sys.stdin.readline

def is_prime(n):
  for i in range(2, n):
    if i**2 > n : break
    if n % i == 0: return False
  return True

def goldbach(n):
  for i in range(n//2, 1, -1):
    if is_prime(i) and is_prime(n - i):
      print(i, n - i)
      break

if __name__ == "__main__":
  for _ in range(int(input())):
    n = int(input())
    goldbach(n)