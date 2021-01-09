import sys
input = sys.stdin.readline

N = int(input())

group_words_count = 0
for _ in range(N):
  cnt = 1
  word = input().rstrip()
  for i in range(1, len(word)):
    if word[i-1] != word[i]: cnt += 1
  
  if cnt == len(set(word)): group_words_count += 1
print(group_words_count)