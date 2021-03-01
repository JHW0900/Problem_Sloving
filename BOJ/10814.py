import sys
input = sys.stdin.readline

n = int(input())

lst = list()

for _ in range(n):
    age, name = map(str, input().split())
    lst.append((int(age), name))

sol = sorted(lst, key = lambda x : x[0])

for i in sol:
    print(i[0], i[1])