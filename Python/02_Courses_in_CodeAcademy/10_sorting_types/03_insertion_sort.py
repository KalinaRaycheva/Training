def insertion_sort(arr): 
    arr_size = len(arr)
    for number in range(1, arr_size): 
        key = arr[number]
        j = number - 1 
        while j >= 0 and key < arr[j]: 
            arr[j + 1] = arr[j] 
            j -= 1         
        arr[j + 1] = key            

list1 = [ 7, 2, 1, 6 ] 
print("The unsorted list is:", list1) 
print("The sorted new list is:", insertion_sort(list1))
