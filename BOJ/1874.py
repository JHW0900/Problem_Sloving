import sys
input = sys.stdin.readline


n = int(input())

stack = []
result = []
prev = 1

def stack_push(n):
    global prev
    stack.append(n)
    prev += 1
    result.append('+')

def stack_pop(n):
    stack.pop()
    result.append('-')

for _ in range(n):
    num = int(input())

    if len(stack) == 0:
        for i in range(prev, num+1):
            stack_push(i)
        stack_pop(num)
    elif num == stack[-1]:
        stack_pop(num)
    elif prev <= num:
        for i in range(prev, num+1):
            stack_push(i)
        stack_pop(num)
    else:
        result.append('NO')

if 'NO' in result:
    print('NO')
else:
    for c in result:
        print(c)