# PyPy3로 제출함

# n < X <= 2n
import sys
input = sys.stdin.readline

def is_prime(n):
  for i in range(2, n+1):
    if i**2 > n: break
    if n % i == 0: return 0
  return 1

if __name__ == "__main__":

  while True:
    cnt = 0

    n = int(input())
    if n == 0: break
    
    for i in range(n + 1, 2*n + 1):
      cnt += is_prime(i)
    
    print(cnt)
