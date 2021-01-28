# 회의실 배정
import sys
input = sys.stdin.readline

n = int(input())
seminar = []

def search():
  count = 0
  start = 0
  for s in seminar:
    if start <= s[0]:
      count += 1
      start = s[1]
  return count

for _ in range(n):
  seminar.append(tuple(map(int, input().split())))
seminar.sort()
seminar = sorted(seminar, key=lambda a: a[1])

print(search())