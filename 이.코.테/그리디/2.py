# 큰 수의 법칙
import sys
input = sys.stdin.readline

N, M, K = map(int, input().split())
data = list(map(int, input().split()))
data = sorted(data, reverse=True)

i = 0
summary = 0
while i < M:
  if K+1 > M-i:
    summary += data[0]*(M-i)
    break
  summary += (data[0]*K + data[1])
  i += 4

print(summary)