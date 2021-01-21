import sys
input = sys.stdin.readline

if __name__ == "__main__":
  x, y, w, h = map(int, input().split())

  if w/2 > x: path = x
  else: path = w - x
  
  if h/2 > y: path2 = y
  else: path2 = h - y

  print(min(path, path2))