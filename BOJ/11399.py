# ATM
import sys
input = sys.stdin.readline

n = int(input())
person = list(map(int, input().split()))
person.sort()

result = tmp = 0
for i in person:
  tmp += i
  result += tmp

print(result)