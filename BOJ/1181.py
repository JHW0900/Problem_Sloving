import sys
input = sys.stdin.readline

n = int(input())
words = list()

for _ in range(n):
    is_push = False
    w = input().rstrip()
    if len(words) == 0:
        words.append(w)
        continue
    elif w in words: continue
    for i in range(len(words)):
        if len(words[i]) == len(w):
            if words[i] > w: 
                words.insert(i, w)
                is_push = True
                break
        elif len(words[i]) > len(w): 
            words.insert(i, w)
            is_push = True
            break
    if not is_push:
        words.append(w)

for c in words:
    print(c)

