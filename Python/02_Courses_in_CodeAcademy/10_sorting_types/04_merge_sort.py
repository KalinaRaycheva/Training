def mergeSort(arr, n):
    if len(arr) > 1:
        middle = n // 2
        left_half = arr[:middle]
        right_half = arr[middle:]
    
        mergeSort(left_half, len(left_half))
        mergeSort(right_half, len(right_half))
        
        
        left_item = right_item = arr_position = 0
        while (left_item < len(left_half)) and (right_item < len(right_half)):
            if left_half[left_item] <= right_half[right_item]:
                arr[arr_position] = left_half[left_item]
                left_item += 1
            else:
                arr[arr_position] = right_half[right_item]
                right_item += 1
            arr_position += 1
         
        while left_item < len(left_half):
            arr[arr_position] = left_half[left_item]
            left_item += 1
            arr_position += 1
              
        while right_item < len(right_half):
            arr[arr_position] = right_half[right_item]
            right_item += 1
            arr_position += 1
        
    return arr


print(mergeSort([3,4,1,6,2,5,7], 7))       
