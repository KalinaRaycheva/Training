import itertools
import operator


arr = [1, 2, 3] 


print("\nInfinite iterators:")
print("Cycle:")
iterator1 = itertools.cycle(arr)
for i in range(5):
    print(next(iterator1), end = " ")
print("\r")
print("Repeat:")
print(list(itertools.repeat(arr, 3)))
print("Count:")
iterator3 = itertools.count(arr[0], 2)
for i in range(3):
    print(next(iterator3), end = " ")
print("\r")


print("\nCombinatoric iterators:")
print("Product:")
print(list(itertools.product(arr)))
print("Permutation:")
print(list(itertools.permutations(arr, 2)))
print("Combination:")
print(list(itertools.combinations(arr, 2)))
print("Combination with replacement2:")
print(list(itertools.combinations_with_replacement(arr, 2)))


print("\nTerminating iterators:")
print("Accumulate:")
print(list(itertools.accumulate(arr, operator.mul)))
print("Chain:")
print(list(itertools.chain(arr, [4, 5, 6])))
print("Compress:")
print(list(itertools.compress(arr, [1, 0, 1])))
print("Islice:")
print(list(itertools.islice(arr, 0, 2)))
