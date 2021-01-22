import sys
input = sys.stdin.readline

dp = [ 0 for _ in range(21) ]
dp[0] = 0
dp[1] = 1
def fibo(n):
  if dp[n] == 0 and n > 0: 
    dp[n] = fibo(n-1) + fibo(n-2)
  return dp[n]
  
if __name__ == "__main__":
  print(fibo(int(input())))
