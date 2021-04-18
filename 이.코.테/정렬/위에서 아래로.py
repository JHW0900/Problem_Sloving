# p.178
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))
arr = sorted(arr, reverse = True)
print(arr)

'''
Test Case:

3
15
27
12

Out Put : 27 15 12
'''