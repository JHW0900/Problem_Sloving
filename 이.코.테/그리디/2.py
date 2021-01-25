# 큰 수의 법칙
import sys
input = sys.stdin.readline

N, M, K = map(int, input().split())
data = list(map(int, input().split()))
data = sorted(data, reverse=True)

# i = 0
# summary = 0
# while i < M:
#   if K+1 > M-i:
#     summary += data[0]*(M-i)
#     break
#   summary += (data[0]*K + data[1])
#   i += 4

# 답안 예시
count = M//(K+1)*K + M%(K+1)    # 가장 큰 수의 등장 횟수를 먼저 구함
summary = count * data[0]
summary += (M - count) * data[1]

print(summary)