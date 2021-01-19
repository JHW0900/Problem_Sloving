N = int(input())
num = int(input())
summary = 0

while(True):
  if num == 0:
    break
  summary += (num%10)
  num//=10

print(summary)