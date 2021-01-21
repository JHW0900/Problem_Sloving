import sys
input = sys.stdin.readline

if __name__ == "__main__":
  posX = [ 0 for _ in range(3) ]
  posY = [ 0 for _ in range(3) ]
  
  for i in range(3):
    posX[i], posY[i] = map(int, input().split())

  for i in range(3):
    if posX.count(posX[i]) == 1: posX.append(posX[i])
    if posY.count(posY[i]) == 1: posY.append(posY[i])
  
  print(posX[3], posY[3])