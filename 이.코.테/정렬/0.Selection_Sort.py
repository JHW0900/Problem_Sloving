# Selection Sort
input_num = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
length = len(input_num)

for i in range(length):
    min_index = i
    for j in range(i+1, length):
        if(input_num[min_index] > input_num[j]):
            min_index = j
    input_num[i], input_num[min_index] = input_num[min_index], input_num[i]

print(input_num)