import sys
input = sys.stdin.readline

N = int(input())

length = 0

point_list = [[0, 0] for _ in range(N)]
for i in range(N):
  x, y = map(int, input().split())
  point_list[i] = [x, y]
point_list.sort()

for i in range(N):
  first = True
  for j in range(N):
    if point_list[i][1] == point_list[j][1] and i != j:
      sub = (max(point_list[j][0],point_list[i][0]) - min(point_list[j][0],point_list[i][0]))
      if first: 
        tmp = sub
        first = False
      if tmp > sub:
        tmp = sub
  
  if tmp == 5001: tmp = 0
  length += tmp

print(length)