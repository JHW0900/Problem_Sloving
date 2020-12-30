N = int(input())
cnt = 0
# 3kg / 5kg
while N != 0:
  if N < 3:
    cnt = -1
    break
  if N%5 != 0:
    N -= 3
    cnt += 1
  else:
    cnt += (N//5)
    break

print(cnt)