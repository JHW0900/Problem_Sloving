import sys
input = sys.stdin.readline

if __name__ == "__main__":

  for _ in range(int(input())):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    r = ((x1 - x2)**2 + (y1 - y2)**2)**(1/2)
    r_set = [r1, r2, r]
    r_set.sort()

    if int(r) == 0 and r1 == r2: print(-1)
    elif r_set[0] + r_set[1] < r_set[2]: print(0)
    elif r1 + r2 == r or r + min(r1,r2) == max(r1,r2): print(1)
    else: print(2)