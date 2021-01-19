words = input()
count = [ -1 for _ in range(27)]

for i in range(len(words)):
  if count[ord(words[i]) - ord('a')] == -1:
    count[ord(words[i]) - ord('a')] = i

for i in range(26):
  print(count[i], end=' ')