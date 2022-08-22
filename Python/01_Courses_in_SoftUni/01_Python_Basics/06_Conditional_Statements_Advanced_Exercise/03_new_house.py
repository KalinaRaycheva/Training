flower_name = input()
flower_quantity = int(input())
budget = int(input())

price = 0

if flower_name == "Roses":
    price = 5 * flower_quantity
    if flower_quantity > 80:
        price -= price * 0.1
elif flower_name == "Dahlias":
    price = 3.8 * flower_quantity
    if flower_quantity > 90:
        price -= price * 0.15
elif flower_name == "Tulips":
    price = 2.8 * flower_quantity
    if flower_quantity > 80:
        price -= price * 0.15
elif flower_name == "Narcissus":
    price = 3 * flower_quantity
    if flower_quantity < 120:
        price += price * 0.15
elif flower_name == "Gladiolus":
    price = 2.5 * flower_quantity
    if flower_quantity < 80:
        price += price * 0.2

if budget >= price:
    print(f"Hey, you have a great garden with {flower_quantity} {flower_name} and {(budget - price):.2f} leva left.")
else:
    print(f"Not enough money, you need {(price - budget):.2f} leva more.")