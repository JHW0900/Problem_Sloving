import sys
input = sys.stdin.readline

cmd = input().rstrip()
stack = 0
if cmd == "고무오리 디버깅 시작":
    while True:
        cmd = input().rstrip()

        if cmd == "문제": 
            stack += 1
        elif cmd == "고무오리": 
            if stack > 0:
                stack -= 1
            else: stack += 2
        elif cmd == "고무오리 디버깅 끝":
            break

if stack == 0:
    print("고무오리야 사랑해")
else:  print("힝구")