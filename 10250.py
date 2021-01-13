import sys
input = sys.stdin.readline

# W : 방 / H : 층
T = int(input())
for _ in range(T):
  H, W, N = map(int, input().split())
  room = N // H + 1
  stair = N % H
  if N % H == 0: 
    stair = H
    room -= 1

  if room < 10: print(f"{stair}0{room}")
  else: print(f"{stair}{room}")
