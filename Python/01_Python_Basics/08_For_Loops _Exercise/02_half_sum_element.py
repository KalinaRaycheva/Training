import sys

n = int(input())

total_sum = 0
max_num = -sys.maxsize

for i in range(n):
    number = int(input())
    total_sum += number
    if number > max_num:
        max_num = number

total_sum -= max_num

if total_sum == max_num:
    print(f"Yes\nSum = {total_sum}")
else:
    print(f"No\nDiff = {abs(total_sum - max_num)}")

