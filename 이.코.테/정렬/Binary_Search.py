# Binary_Search
def binary_search(target, arr, start, end):
    if start > end: return None
    mid = (start + end) // 2

    if arr[mid] == target:
        return mid + 1
    elif arr[mid] > target:
        return binary_search(target, arr, start, mid - 1)
    else:
        return binary_search(target, arr, mid + 1, end)

if __name__ == "__main__":
    n, target = map(int, input().split())
    num_list = list(map(int, input().split()))

    tri = binary_search(target, num_list, 0, n-1)

    if tri == None:
        print("원소가 존재하지 않습니다.")
    else:
        print(tri)


'''
Test Case:

10 7
1 3 5 7 9 11 13 15 17 19

Test Case 2:

10 7
1 3 5 6 9 11 13 15 17 19

'''