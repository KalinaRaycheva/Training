def selectionSort(arr):
    arr_size = len(arr)
    for number in range(arr_size):
        min_number = number
        for checker in range(arr_size):
            if min_number > checker:
                min_number = checker
        arr[number], arr[min_number] = arr[min_number], arr[number]

arr = [2, 1, 10, 23]
selectionSort(arr)
print("Sorted array is:")
for num in range(len(arr)):
    print("%d", arr[num])
