import sys
input = sys.stdin.readline

n, m = map(int, input().split())
print(f"{n//m}\n{n%m}")