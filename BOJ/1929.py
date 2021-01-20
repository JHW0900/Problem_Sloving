import sys
input = sys.stdin.readline

if __name__ == "__main__":
  M, N = map(int, input().split())
  prime = [ 1 for _ in range(N + 1)]

  for i in range(2, N+1):
    if prime[i] == 1:
      if M <= i <= N: print(i)
      j = 2
      while i * j < len(prime):
        prime[i*j] = 0
        j += 1
  