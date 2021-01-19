import sys
input = sys.stdin.readline

X = int(input())

numerator = 0
denominator = 0
step = 1

while X > step:
  X -= step
  step += 1

if step % 2 == 0:
  numerator = X
  denominator = (step+1) - X
else:
  numerator = (step+1) - X
  denominator = X

print(f"{numerator}/{denominator}")