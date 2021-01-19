import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

room = [ [-1 for _ in range(15)] for _ in range(15) ]
for i in range(15): room[0][i] = i

def search(k, n):
  tmp = 0
  if room[k][n] != -1: return room[k][n]
  for i in range(1, n+1): 
    tmp += search(k-1, i)
    room[k][i] = tmp
  return room[k][i]


for i in range(int(input())):
  k = int(input())
  n = int(input())

  print(search(k, n))