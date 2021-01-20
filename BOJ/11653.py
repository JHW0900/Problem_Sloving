import sys
input = sys.stdin.readline

prime = []
def is_prime(n):
  for i in range(2, n+1):
    if i**2 >= n: break
    if n % i == 0 : return
  prime.append(n)

if __name__ == "__main__":
  N = int(input())

  for i in range(2, N+1):
    if N % i == 0: is_prime(i)

  i = 0
  while i < (len(prime)):
    if N % prime[i] == 0:
      print(prime[i])
      N //= prime[i]
    else: i += 1