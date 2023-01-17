def bubbleSort(arr):
    arr_size = len(arr)
    for number in range(arr_size):
        for checker in range(0, arr_size - number - 1):
            if arr[checker] > arr[checker + 1]:
                arr[checker], arr[checker + 1] = arr[checker + 1], arr[checker]

arr = [2, 1, 10, 23]
bubbleSort(arr)
print("Sorted array is:")
for num in range(len(arr)):
    print(f"%d", arr[num])
