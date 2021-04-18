# Quick_Sort
input_num = [5, 7, 9, 0, 3, 1, 6, 2, 4, 8]
length = len(input_num)

def quick_sort(s, e):
    if s >= e:
        return

    pivot = s
    left = pivot + 1
    right = e

    while left <= right:
        while left <= e and input_num[left] <= input_num[pivot]:
            left += 1
        while right > s and input_num[right] >= input_num[pivot]:
            right -= 1
        
        if left <= right:
            input_num[right], input_num[left] = input_num[left], input_num[right]
        else:
            input_num[right], input_num[pivot] = input_num[pivot], input_num[right]

    quick_sort(s, right-1)
    quick_sort(right+1, e)
    
quick_sort(0, length-1)
print(input_num)