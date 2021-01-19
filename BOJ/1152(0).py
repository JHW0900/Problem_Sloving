import sys
def input(): return sys.stdin.readline().rstrip() 

words = input()
blank_index = []

for i in range(len(words)):
  if words[i] == " ": blank_index.append(i)

count = len(blank_index) + 1
if len(blank_index) > 0:
  if min(blank_index) == 0: count -= 1
  if max(blank_index) == (len(words)-1): count -= 1
elif len(words) > 0: pass
else: count -= 1
print(count)