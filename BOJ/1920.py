import sys
input = sys.stdin.readline

n = int(input())
v1 = list(map(int, input().split()))

m = int(input())
v2 = list(map(int, input().split()))

for i in v2:
    if i in v1: print(1)
    else: print(0)