# Quick_Sort
input_num = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]
length = len(input_num)

def Quick_Sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[0]
    tail = arr[1:]

    left = [ x for x in tail if x <= pivot]
    right = [ x for x in tail if x > pivot]

    return Quick_Sort(left) + [pivot] + Quick_Sort(right)

print(Quick_Sort(input_num))