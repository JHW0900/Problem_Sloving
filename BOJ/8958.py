T = int(input())

for _ in range(T):
  case = input();
  if case[0] == 'X':
    score = tmp = 0
  elif case[0] == 'O':
    score = tmp = 1
  for i in range(1, len(case)):
    if case[i] == 'X': tmp = 0
    elif case[i] == 'O': tmp += 1
    score += tmp
  print(score)