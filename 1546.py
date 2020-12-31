# score/M*100 으로 replace
N = int(input())  # 과목 수
aver = 0

score = list(map(int ,input().split()))
M = max(score)

for i in range(N): 
  score[i] = score[i]/M*100
  aver += score[i]

print(aver/N)