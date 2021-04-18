# Insertion Sort
input_num = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
length = len(input_num)

for i in range(1, length):
    for j in range(i, 0, -1):
        if input_num[j] < input_num[j-1]:
            input_num[j], input_num[j-1] = input_num[j-1], input_num[j]
        else:
            break
    
print(input_num)