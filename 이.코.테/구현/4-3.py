# 왕실의 나이트
import sys
input = sys.stdin.readline

# 8x8
# 수평 2칸 수직 1칸
# 수직 2칸 수평 1칸
# 열은 a~h, 행은 1~8

step_types = [(-1, -2), (-1, 2), (1, -2), (1, 2), (-2, -1), (-2, 1), (2, -1), (2, 1)]

count = 0
pos = input()
row = int(pos[1])
col = int(ord(pos[0])) - int(ord('a')) + 1

for step in step_types:
  nx = row + step[0]
  ny = col + step[1]

  if nx < 1 or ny < 1 or nx > 8 or ny > 8:
    continue
  count += 1

print(count)