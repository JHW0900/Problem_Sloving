# Sequential_Search
def sequential_search(target, arr):
    length = len(arr)

    for i in range(length):
        if arr[i] == target:
            return i + 1

if __name__ == "__main__":
    print("생성할 원소 개수를 입력한 다음 한 칸 띄고 찾을 문자열을 입력하세요.")
    input_data = input().split()
    search = input_data[1]

    print("앞서 적은 원소 개수만큼 문자열을 입력하세요. 구분은 띄어쓰기 한 칸으로 합니다.")
    name_list = input().split()

    print(sequential_search(search, name_list))

'''
Test Case:

5 Dongbin
Hangul Jonggu Dongbin Taeil Sangwook
'''