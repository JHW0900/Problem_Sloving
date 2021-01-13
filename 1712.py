import sys
input = sys.stdin.readline

# A : 고정비용 / B : 가변비용 / C : 책정된 가격
A, B, C = map(int, input().split())

if B >= C: print(-1)
else: print(A//(C-B) + 1)