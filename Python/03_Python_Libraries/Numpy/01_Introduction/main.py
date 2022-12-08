import numpy


#..........................................................................................................
arr = numpy.array([
                [-1, 2, 0, 4],
                [4, -0.5, 6, 0],
                [2.6, 0, 7, 8],
                [3, -7, 4, 2.0],
                ])
print("Initial Array:\n", arr)

sliced_arr = arr[:2, ::2]
print("Sliced array with first 2 rows and columns 0 and 2:\n", sliced_arr)

index_arr = arr[
                [1, 1, 0, 3],
                [3, 2, 1, 0],
                ]
print("\nElements at indices (1, 3), (1, 2), (0, 1), (3, 0):\n", index_arr)


#................................................................................................................
a = numpy.array([[1, 2],
                 [3, 4]])

b = numpy.array([[4, 3],
                 [2, 1]])

print ("Adding 1 to every element:", a + 1)
print ("\nSubtracting 2 from each element:", b - 2)
print ("\nSum of all array elements: ", a.sum())
print ("\nArray sum:\n", a + b)

#................................................................................................................
nums = numpy.array([1, 2])
print(nums.dtype)

floats = numpy.array([1.5, 2.7])
print(floats.dtype)

manualy_defined = numpy.array([1, 2], dtype=numpy.int64)
print(manualy_defined.dtype)

#................................................................................................................
arr1 = numpy.array([[4, 7],
                    [2, 6]], dtype=numpy.int64)

arr2 = numpy.array([[6, 37],
                    [7, 6]], dtype=numpy.int64)

Add = numpy.add(arr1, arr2)
print("Addition of arr1 and arr2 is:\n", Add)

Sum = numpy.sum(arr1)
print("Sum of arr1 elements is:\n", Sum)

Trans_arr = arr1.T
print("Transpose of Array:\n", Trans_arr)

