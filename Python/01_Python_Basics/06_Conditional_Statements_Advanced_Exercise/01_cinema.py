screening_type = input()
rows = int(input())
columns = int(input())

price = 0
profit = 0

if screening_type == "Premiere":
    price = 12
    profit = 12 * rows * columns
elif screening_type == "Normal":
    price = 7.5
    profit = 7.5 * rows * columns
elif screening_type == "Discount":
    price = 5
    profit = 5 * rows * columns

print(f"{profit:.2f} leva")