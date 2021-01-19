C = int(input())

for _ in range(C):
  cnt = 0
  aver = 0
  score = list(map(int, input().split()))
  for i in range(1, len(score)): aver += score[i]
  aver /= score[0]
  for i in range(1, len(score)):
    if score[i] > aver: cnt += 1

  print(f"{(cnt/score[0]*100):.3f}%")