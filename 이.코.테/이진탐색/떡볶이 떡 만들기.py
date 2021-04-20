# p.201
height = 0

def bin_search(target, arr, start, end):
    global height
    if start > end: return height

    mid = (start + end) // 2

    length = 0
    for i in arr:
        if i > mid:
            length += (i - mid)
    
    if target > length:
        return bin_search(target, arr, start, mid-1)
    else:
        height = mid
        return bin_search(target, arr, mid+1, end)

if __name__ == "__main__":
    n, h = map(int, input().split())
    line = list(map(int, input().split()))

    print(bin_search(h, line, 0, max(line)))

'''
4 6
19 16 10 17
'''