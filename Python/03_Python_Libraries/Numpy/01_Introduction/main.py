import numpy

arr = numpy.array([
                [-1, 2, 0, 4],
                [4, -0.5, 6, 0],
                [2.6, 0, 7, 8],
                [3, -7, 4, 2.0],
                ])
print("Initial Array:\n", arr)

sliced_arr = arr[:2, ::2]
print("Sliced array with first 2 rows and columns 0 and 2:\n", sliced_arr)

index_arr = arr[[
                [1, 1, 0, 3],
                [3, 2, 1, 0],
                ]]
print("\nElements at indices (1, 3), (1, 2), (0, 1), (3, 0):\n", index_arr)