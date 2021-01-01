words = input().upper()
wordset = set(words)
alpha = [ 0 for _ in range(26)]
max = 0

for i in wordset:
  alpha[ord(i) - ord('A')] = words.count(i)
  if max < words.count(i): max = words.count(i)

if alpha.count(max) > 1: print('?')
else: print(chr(ord('A') + alpha.index(max)))