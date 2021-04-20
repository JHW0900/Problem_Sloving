# p.197
def bin_search(target, arr, start, end):
    if start > end: return None
    mid = (start + end) // 2

    if arr[mid] == target:
        return mid + 1
    elif arr[mid] > target:
        return bin_search(target, arr, start, mid-1)
    else:
        return bin_search(target, arr, mid+1, end)

if __name__ == "__main__":
    n = int(input())
    num = list(map(int, input().split()))
    num.sort()
    
    m = int(input())
    target = list(map(int, input().split()))

    for i in target:
        tri = bin_search(i, num, 0, n-1)

        if tri == None:
            print("no", end = " ")
        else:
            print("yes", end = " ")


'''
Test Case:

5
8 3 7 9 2
3
5 7 9

'''