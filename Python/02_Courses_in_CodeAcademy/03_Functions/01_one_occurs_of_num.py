def occursOnce(a):
    for num in a:
        if a.count(num) == 1:
            return num


print(occursOnce([1, 1, 4, 4, 3]))