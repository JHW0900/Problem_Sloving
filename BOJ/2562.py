score = [ 0 for _ in range(9)]
for i in range(9):
  score[i] = int(input())

print(max(score))
print(score.index(max(score))+1)