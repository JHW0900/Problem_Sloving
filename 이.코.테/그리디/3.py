# 숫자 카드 게임
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
matrix = [ [ 0 for _ in range(m) ] for _ in range(n) ]

minimum = 0
for i in range(n): 
  matrix[i] = list(map(int, input().split()))
  matrix[i].sort()
  minimum = max(minimum, min(matrix[i]))

print(minimum)